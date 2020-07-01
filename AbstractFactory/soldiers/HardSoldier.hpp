#pragma once

#include "AbstractSoldier.hpp"

namespace patterns {
namespace abstract_factory {

class HardSoldier: public AbstractSoldier
{
public:
    virtual std::string text() const override {
        return "Hard soldier";
    }

    virtual ~HardSoldier() { }
};

} //abstract factory
} //patterns
