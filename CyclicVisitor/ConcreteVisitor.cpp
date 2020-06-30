
#include "ConcreteVisitor.hpp"

#include <iostream>

#include "Widget.hpp"
#include "ConcreteWidget1.hpp"
#include "ConcreteWidget2.hpp"

namespace patterns {
namespace visitor {

/*virtual*/ void ConcreteVisitor::visit(Widget* w) {
    std::cout << "[w] " << w->text() << '\n';
}

/*virtual*/ void ConcreteVisitor::visit(ConcreteWidget1* cw1) {
    std::cout << "[cw1] " << cw1->text() << '\n';
}

/*virtual*/ void ConcreteVisitor::visit(ConcreteWidget2* cw2) {
    std::cout << "[cw2] " << cw2->text() << '\n';
}

} //visitor
} //patterns
