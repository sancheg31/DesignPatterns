#pragma once

#include "BasicVisitor.hpp"

#define DEFINE_CYCLIC_VISITABLE(Visitor) \
    virtual Visitor::return_type accept(Visitor* visitor) override \
    {  return visitor->genericVisit(this); }


namespace patterns {
namespace visitor {

template <typename T, typename R = void>
class BaseVisitable
{
public:
    using return_type = R;
    virtual return_type accept(T*) = 0;
};

} //visitor
} //patterns
