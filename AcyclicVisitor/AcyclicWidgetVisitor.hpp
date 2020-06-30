#pragma once


namespace patterns {
namespace acyclic_visitor {

class Widget;

class WidgetVisitor
{
public:
    virtual void visit(Widget*);
    virtual ~WidgetVisitor() { }
};

} //acyclic_visitor
} //patterns



