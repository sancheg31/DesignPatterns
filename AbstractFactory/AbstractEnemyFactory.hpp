#pragma once

#include "soldiers/AbstractSoldier.hpp"
#include "monsters/AbstractMonster.hpp"

#include "TemplateAbstractFactory.hpp"
#include "TemplateConcreteFactory.hpp"

#include <cassert>


template <typename T>
class AbstractFactoryNewUnit
{
public:
    virtual T* doCreate(TType<T>) = 0;
    virtual ~AbstractFactoryNewUnit() { }
};

template <typename T>
class AbstractFactoryCloneUnit
{
public:

    virtual T* doCreate(TType<T>) = 0;
    virtual void doGetPrototype(T*&) = 0;
    virtual void doSetPrototype(T*) = 0;

    virtual ~AbstractFactoryCloneUnit() { }
};


template <class ConcreteProduct, class Base>
class ConcreteFactoryNewUnit: public Base
{
    using base_product_list = typename Base::product_list;
protected:

    using product_list = pop_front_t<base_product_list>;
    using abstract_product = first_t<base_product_list>;

    virtual ConcreteProduct* doCreate(TType<abstract_product>) override {
        return new ConcreteProduct();
    }

public:
    virtual ~ConcreteFactoryNewUnit() { }
};

template <class ConcreteProduct, class Base>
class ConcreteFactoryCloneUnit: public Base
{
    using base_product_list = typename Base::product_list;
protected:

    using product_list = pop_front_t<base_product_list>;
    using abstract_product = first_t<base_product_list>;

    virtual abstract_product* doCreate(TType<abstract_product>) override {
        assert(prototype);
        return prototype->clone();
    }

    virtual void doGetPrototype(abstract_product*& prot) override {
        prot = prototype;
    }

    virtual void doSetPrototype(abstract_product* prot) override {
        prototype = prot;
    }

private:
    abstract_product* prototype;
};


namespace patterns {
namespace abstract_factory {

using AbstractEnemyFactory = TemplateAbstractFactory<
                                                    AbstractFactoryNewUnit,
                                                    type_list<AbstractSoldier, AbstractMonster>>;

using AbstractEnemyCloneFactory = TemplateAbstractCloneFactory<
                                                    AbstractFactoryCloneUnit,
                                                    type_list<AbstractSoldier, AbstractMonster>>;


} //abstract factory
} //patterns








