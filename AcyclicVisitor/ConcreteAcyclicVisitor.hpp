#pragma once

#include "BasicAcyclicVisitor.hpp"
#include "AcyclicWidgetVisitor.hpp"
#include "ConcreteAcyclicWidget1Visitor.hpp"
#include "ConcreteAcyclicWidget2Visitor.hpp"

namespace patterns {
namespace acyclic_visitor {

class ConcreteVisitor: public BasicAcyclicVisitor,
                        public WidgetVisitor,
                        public ConcreteWidget1Visitor,
                        public ConcreteWidget2Visitor
{
public:
    virtual ~ConcreteVisitor() { }
};

} //acyclic_visitor
} //patterns



