#pragma once

#include "BasicVisitor.hpp"

namespace patterns {
namespace visitor {

class ConcreteVisitor: public BasicVisitor<void, Widget, ConcreteWidget1, ConcreteWidget2>
{
public:
    virtual void visit(Widget*) override;
    virtual void visit(ConcreteWidget1*) override;
    virtual void visit(ConcreteWidget2*) override;
    virtual ~ConcreteVisitor() { }
};

} //visitor
} //patterns



