#pragma once

#include <vector>
#include <iostream>

#include "ConcreteVisitor.hpp"
#include "Widget.hpp"
#include "ConcreteWidget1.hpp"
#include "ConcreteWidget2.hpp"

namespace patterns {
namespace visitor {

class VisitorExecution
{
public:
    void execute() {

        std::cout << "Visitor execution\n";
        BasicVisitor* visitor = new ConcreteVisitor();
        std::vector<Widget*> widgets;
        widgets.push_back(new Widget());
        widgets.push_back(new ConcreteWidget2());
        widgets.push_back(new ConcreteWidget1());

        for (auto & widget: widgets)
            widget->accept(visitor);
    }
};

} //visitor
} //patterns
