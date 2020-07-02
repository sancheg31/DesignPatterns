#pragma once

#include "AbstractEnemy.hpp"
#include "soldiers/AbstractSoldier.hpp"
#include "monsters/AbstractMonster.hpp"


template <typename T>
class TType
{
public:
    using type = T;
};

template <typename ... Tp>
struct type_list { };

template <typename TList>
struct first;

template <typename T, typename ... Tp>
struct first<type_list<T, Tp...>>
{
    using type = T;
};

template <typename TList>
using first_t = typename first<TList>::type;


template <typename TList>
struct pop_front;

template <typename T, typename ... Tp>
struct pop_front<type_list<T, Tp...>>
{
    using type = type_list<Tp...>;
};

template <typename TList>
using pop_front_t = typename pop_front<TList>::type;


template <typename Type, typename Base>
class linear_hierarchy_holder: public Base
{
public:
    using type = Type;
};

template <class TList, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy;

template <typename T, typename ... Tp, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy<type_list<T, Tp...>, TUnit, TRoot>:
        public TUnit<T, generate_linear_hierarchy<type_list<Tp...>, TUnit, TRoot>>
{

};

template <typename T, template <class, class> class TUnit, class TRoot>
class generate_linear_hierarchy<type_list<T>, TUnit, TRoot>: public TUnit<T, TRoot> { };

template <typename T>
class AbstractFactoryUnit
{
public:
    virtual T* doCreate(TType<T>) = 0;
    virtual ~AbstractFactoryUnit() { }
};


template <class ConcreteProduct, class Base>
class ConcreteFactoryUnit: public Base
{
    using base_product_list = typename Base::product_list;
protected:
    using product_list = pop_front_t<base_product_list>;
public:
    using abstract_product = first_t<base_product_list>;
    virtual ConcreteProduct* doCreate(TType<abstract_product>) override {
        return new ConcreteProduct();
    }
    virtual ~ConcreteFactoryUnit() { }
};

template <template <class> class TUnit, class TList>
class TemplateAbstractFactory;

template <template <class> class TUnit, typename ... Tp>
class TemplateAbstractFactory<TUnit, type_list<Tp...>>: public TUnit<Tp>...
{
public:
    using product_list = type_list<Tp...>;
    template <class T>
    T* create() {
        TUnit<T>& unit = *this;
        return unit.doCreate(TType<T>{});
    }

    virtual ~TemplateAbstractFactory() { }
};

template<
        class AbstractFactory,
        template <class, class> class TUnit = ConcreteFactoryUnit,
        class TList = typename AbstractFactory::product_list
        >
class TemplateConcreteFactory: public generate_linear_hierarchy<TList, TUnit, AbstractFactory>
{
    using product_list = typename AbstractFactory::product_list;
    using concrete_product_list = TList;

    virtual ~TemplateConcreteFactory() { }
};

namespace patterns {
namespace abstract_factory {

using AbstractEnemyFactory = TemplateAbstractFactory<AbstractFactoryUnit,
                                                    type_list<AbstractSoldier, AbstractMonster>>;


} //abstract factory
} //patterns








