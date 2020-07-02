#pragma once

#include "type_list_excerpt.hpp"
#include "AbstractEnemy.hpp"
#include "soldiers/AbstractSoldier.hpp"
#include "monsters/AbstractMonster.hpp"

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
    using abstract_product = first_t<base_product_list>;

    virtual ConcreteProduct* doCreate(TType<abstract_product>) override {
        return new ConcreteProduct();
    }

public:
    virtual ~ConcreteFactoryUnit() { }
};

template <template <class> class TUnit, class TList>
class TemplateAbstractFactory;

template <template <class> class TUnit, typename ... Tp>
class TemplateAbstractFactory<TUnit, type_list<Tp...>>: protected TUnit<Tp>...
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








