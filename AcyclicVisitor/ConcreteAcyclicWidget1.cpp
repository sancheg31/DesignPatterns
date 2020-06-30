
#include "ConcreteAcyclicWidget1.hpp"

#include "ConcreteAcyclicWidget1Visitor.hpp"

namespace patterns {
namespace acyclic_visitor {

void ConcreteWidget1::accept(BasicAcyclicVisitor* visitor) {
    if (auto newv = dynamic_cast<ConcreteWidget1Visitor*>(visitor)) {
        newv->visit(this);
    }
}

std::string ConcreteWidget1::text() const {
    return "ConcreteWidget1";
}

} //acyclic_visitor
} //patterns
