#pragma once

namespace patterns {
namespace visitor {

class Widget;
class ConcreteWidget1;
class ConcreteWidget2;



class BasicVisitor
{
public:
    virtual void visit(Widget*) = 0;
    virtual void visit(ConcreteWidget1*) = 0;
    virtual void visit(ConcreteWidget2*) = 0;
    virtual ~BasicVisitor() { }
};

} //visitor
} //patterns



