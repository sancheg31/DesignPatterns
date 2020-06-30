#pragma once

#include "AcyclicWidget.hpp"

namespace patterns {
namespace acyclic_visitor {

class ConcreteWidget1: public Widget
{
public:
    DEFINE_VISITABLE
    virtual std::string text() const override;
    virtual ~ConcreteWidget1() { }
};

} //acyclic_visitor
} //patterns
