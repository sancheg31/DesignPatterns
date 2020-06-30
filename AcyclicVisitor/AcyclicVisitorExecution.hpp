#pragma once

#include <iostream>
#include <vector>

#include "ConcreteAcyclicVisitor.hpp"
#include "ConcreteAcyclicWidget1.hpp"
#include "ConcreteAcyclicWidget2.hpp"
#include "AcyclicWidget.hpp"

namespace patterns {
namespace acyclic_visitor {

class AcyclicVisitorExecution
{
public:
    void execute() {
        std::cout << "Acyclic Visitor Execution\n";

        BasicAcyclicVisitor* visitor = new ConcreteVisitor();

        std::vector<Widget*> widgets;
        widgets.push_back(new Widget());
        widgets.push_back(new ConcreteWidget1());
        widgets.push_back(new ConcreteWidget2());
        widgets.push_back(new Widget());
        widgets.push_back(new ConcreteWidget2());

        for (auto & widget: widgets)
            widget->accept(visitor);
    }
};

} //acyclic_visitor
} //patterns
