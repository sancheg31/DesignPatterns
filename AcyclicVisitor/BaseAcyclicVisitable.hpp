#pragma once

#include "BasicAcyclicVisitor.hpp"

#define DEFINE_VISITABLE \
    virtual return_type accept(BasicAcyclicVisitor* visitor) override \
    { return acceptImpl(this, visitor); }

namespace patterns {
namespace acyclic_visitor {

template <typename R = void>
class BaseVisitable
{
public:
    using return_type = R;

    virtual return_type accept(BasicAcyclicVisitor* visitor) = 0;
    virtual ~BaseVisitable() { }

protected:
    template <typename T>
    static return_type acceptImpl(T* visited, BasicAcyclicVisitor* visitor) {
        if (VisitorNode<T>* newv = dynamic_cast<VisitorNode<T>*>(visitor)) {
            return newv->visit(visited);
        }
            return return_type();
    }
};


} //acyclic_visitor
} //patterns
