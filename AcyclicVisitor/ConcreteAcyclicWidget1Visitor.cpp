

#include "ConcreteAcyclicWidget1Visitor.hpp"

#include <iostream>

#include "ConcreteAcyclicWidget1.hpp"

namespace patterns {
namespace acyclic_visitor {

void ConcreteWidget1Visitor::visit(ConcreteWidget1* cw1) {
    std::cout << "[cw1]" << cw1->text() << '\n';
}

} //acyclic_visitor
} //patterns
