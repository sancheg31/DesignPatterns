#pragma once

namespace patterns {
namespace visitor {

class Widget;
class ConcreteWidget1;
class ConcreteWidget2;

template <typename T, typename R = void>
class VisitorNode
{
public:
    using return_type = R;
    virtual return_type visit(T*) = 0;
};

template <typename R, typename ... Tp>
class BasicVisitor: public VisitorNode<Tp>...
{
public:
    using return_type = R;

    template <class Visited>
    return_type genericVisit(Visited* host) {
        VisitorNode<Visited>& node = *this;
        return node.visit(host);
    }
    virtual ~BasicVisitor() { }
};

using BasicWidgetVisitor = BasicVisitor<void, Widget, ConcreteWidget1, ConcreteWidget2>;



} //visitor
} //patterns



