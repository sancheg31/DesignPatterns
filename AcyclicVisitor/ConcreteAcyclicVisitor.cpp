#include "ConcreteAcyclicVisitor.hpp"

#include <iostream>

#include "AcyclicWidget.hpp"
#include "ConcreteAcyclicWidget2.hpp"
#include "ConcreteAcyclicWidget1.hpp"

namespace patterns {
namespace acyclic_visitor {

/*virtual*/ void ConcreteVisitor::visit(Widget* w) {
    std::cout << "[w]" << w->text() << '\n';
}

/*virtual*/ void ConcreteVisitor::visit(ConcreteWidget1* cw1) {
    std::cout << "[cw1]" << cw1->text() << '\n';
}

/*virtual*/ void ConcreteVisitor::visit(ConcreteWidget2* cw2) {
    std::cout << "[cw2]" << cw2->text() << '\n';
}



} //acyclic_visitor
} //patterns
