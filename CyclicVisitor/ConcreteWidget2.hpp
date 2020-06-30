#pragma once

#include "Widget.hpp"

namespace patterns {
namespace visitor {

class ConcreteWidget2: public Widget
{
public:
    DEFINE_CYCLIC_VISITABLE(BasicWidgetVisitor)
    virtual std::string text() const override;
    virtual ~ConcreteWidget2() { }
};

} //visitor
} //patterns
