

#include "Widget.hpp"

#include "BasicVisitor.hpp"

namespace patterns {
namespace visitor {

void Widget::accept(BasicVisitor* visitor) {
    visitor->visit(this);
}

std::string Widget::text() const {
    return "Widget";
}

} //visitor
} //patterns

