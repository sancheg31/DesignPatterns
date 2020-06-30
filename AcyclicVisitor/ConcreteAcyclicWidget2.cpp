
#include "ConcreteAcyclicWidget2.hpp"

#include "ConcreteAcyclicWidget2Visitor.hpp"

namespace patterns {
namespace acyclic_visitor {

void ConcreteWidget2::accept(BasicAcyclicVisitor* visitor) {
    if (auto newv = dynamic_cast<ConcreteWidget2Visitor*>(visitor)) {
        newv->visit(this);
    }
}

std::string ConcreteWidget2::text() const {
    return "ConcreteWidget2";
}

} //acyclic_visitor
} //patterns
