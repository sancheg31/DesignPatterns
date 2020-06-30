#pragma once


namespace patterns {
namespace acyclic_visitor {

class BasicAcyclicVisitor
{
public:
    virtual ~BasicAcyclicVisitor() { }
};

template <typename T, typename R = void>
class VisitorNode
{
public:
    using ReturnType = R;
    virtual ReturnType visit(T*) = 0;
};


} //acyclic_visitor
} //patterns

