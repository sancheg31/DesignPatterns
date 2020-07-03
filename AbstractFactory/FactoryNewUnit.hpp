#pragma once

#include "type_list_excerpt.hpp"

template <typename TAbstractProduct>
class AbstractFactoryNewUnit;

template <typename T>
class AbstractFactoryNewUnit
{
public:
    virtual T* doCreate(TType<T>) = 0;
    virtual ~AbstractFactoryNewUnit() { }
};

template <class TConcreteProduct, class Base>
class ConcreteFactoryNewUnit;

template <class TConcreteProduct, class Base>
class ConcreteFactoryNewUnit: public Base
{
    using base_product_list = typename Base::product_list;
protected:

    using product_list = pop_front_t<base_product_list>;
    using abstract_product = first_t<base_product_list>;

    virtual TConcreteProduct* doCreate(TType<abstract_product>) override {
        return new TConcreteProduct();
    }

public:
    virtual ~ConcreteFactoryNewUnit() { }
};
