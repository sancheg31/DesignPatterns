#pragma once

#include "AcyclicWidget.hpp"

namespace patterns {
namespace acyclic_visitor {

class ConcreteWidget1: public Widget
{
public:
    virtual void accept(BasicAcyclicVisitor*) override;
    virtual std::string text() const override;
    virtual ~ConcreteWidget1() { }
};

} //acyclic_visitor
} //patterns
