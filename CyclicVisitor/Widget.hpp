#pragma once

#include "BaseCyclicVisitable.hpp"

#include "ConcreteVisitor.hpp"

#include <string>

namespace patterns {
namespace visitor {

class Widget: public BaseVisitable<BasicWidgetVisitor>
{
public:
    DEFINE_CYCLIC_VISITABLE(BasicWidgetVisitor)
    virtual std::string text() const;
    virtual ~Widget() { }
};

} //visitor
} //patterns

