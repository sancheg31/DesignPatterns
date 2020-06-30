#include "AcyclicWidget.hpp"

#include "AcyclicWidgetVisitor.hpp"

namespace patterns {
namespace acyclic_visitor {

void Widget::accept(BasicAcyclicVisitor* visitor) {
    if (auto newv = dynamic_cast<WidgetVisitor*>(visitor)) {
        newv->visit(this);
    }
}

std::string Widget::text() const {
    return "Widget";
}

} //acyclic_visitor
} //patterns
