#include "AcyclicWidgetVisitor.hpp"

#include <iostream>

#include "AcyclicWidget.hpp"

namespace patterns {
namespace acyclic_visitor {

void WidgetVisitor::visit(Widget* w) {
    std::cout << "[w]" << w->text() << '\n';
}

} //acyclic_visitor
} //patterns
