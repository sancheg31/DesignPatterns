#include "ConcreteWidget1.hpp"

#include "BasicVisitor.hpp"

namespace patterns {
namespace visitor {

void ConcreteWidget1::accept(BasicVisitor* visitor) {
    visitor->visit(this);
}

std::string ConcreteWidget1::text() const {
    return "ConcreteWidget1";
}

} //visitor
} //patterns


