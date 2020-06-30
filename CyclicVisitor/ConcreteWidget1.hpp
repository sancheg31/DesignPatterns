#pragma once

#include "Widget.hpp"

namespace patterns {
namespace visitor {

class ConcreteVisitor;

class ConcreteWidget1: public Widget
{
public:
    DEFINE_CYCLIC_VISITABLE(BasicWidgetVisitor)
    virtual std::string text() const override;
    virtual ~ConcreteWidget1() { }
};

} //visitor
} //patterns
