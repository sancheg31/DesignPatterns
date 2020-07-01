#pragma once


#include "AbstractSoldier.hpp"

namespace patterns {
namespace abstract_factory {

class MediumSoldier: public AbstractSoldier
{
public:
    virtual std::string text() const override {
        return "Medium soldier";
    }

    virtual ~MediumSoldier() { }
};

} //abstract factory
} //patterns
