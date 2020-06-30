
#include "ConcreteAcyclicWidget2Visitor.hpp"

#include <iostream>

#include "ConcreteAcyclicWidget2.hpp"

namespace patterns {
namespace acyclic_visitor {

void ConcreteWidget2Visitor::visit(ConcreteWidget2* cw2) {
    std::cout << "[cw2]" << cw2->text() << '\n';
}

} //acyclic_visitor
} //patterns
