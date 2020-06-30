#pragma once


namespace patterns {
namespace acyclic_visitor {

class ConcreteWidget1;

class ConcreteWidget1Visitor
{
public:
    virtual void visit(ConcreteWidget1*);
    virtual ~ConcreteWidget1Visitor() { }
};


} //acyclic_visitor
} //patterns

