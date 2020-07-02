#pragma once

#include "type_list_excerpt.hpp"

template<
        class AbstractFactory,
        template <class, class> class TUnit,
        class TList = typename AbstractFactory::product_list
        >
class TemplateConcreteFactory: public generate_linear_hierarchy<TList, TUnit, AbstractFactory>
{
    using product_list = typename AbstractFactory::product_list;
    using concrete_product_list = TList;

    virtual ~TemplateConcreteFactory() { }
};
