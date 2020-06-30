#pragma once

#include "BasicAcyclicVisitor.hpp"

namespace patterns {
namespace acyclic_visitor {

class Widget;
class ConcreteWidget1;
class ConcreteWidget2;

class ConcreteVisitor: public BasicAcyclicVisitor,
                        public VisitorNode<Widget>,
                        public VisitorNode<ConcreteWidget1>,
                        public VisitorNode<ConcreteWidget2>
{
public:
    virtual void visit(Widget* w) override;
    virtual void visit(ConcreteWidget1* cw1) override;
    virtual void visit(ConcreteWidget2* cw2) override;

    virtual ~ConcreteVisitor() { }
};

} //acyclic_visitor
} //patterns



