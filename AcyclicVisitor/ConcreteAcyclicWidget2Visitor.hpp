#pragma once


namespace patterns {
namespace acyclic_visitor {

class ConcreteWidget2;

class ConcreteWidget2Visitor
{
public:
    virtual void visit(ConcreteWidget2*);
    virtual ~ConcreteWidget2Visitor() { }
};

} //acyclic_visitor
} //patterns

