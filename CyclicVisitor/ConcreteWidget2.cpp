#include "ConcreteWidget2.hpp"

#include "BasicVisitor.hpp"

namespace patterns {
namespace visitor {

void ConcreteWidget2::accept(BasicVisitor* visitor) {
    visitor->visit(this);
}

std::string ConcreteWidget2::text() const {
    return "ConcreteWidget1";
}

} //visitor
} //patterns
