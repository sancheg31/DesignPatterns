#pragma once


#include "AbstractSoldier.hpp"

namespace patterns {
namespace abstract_factory {

class EasySoldier: public AbstractSoldier
{
public:
    virtual std::string text() const override {
        return "Easy soldier";
    }

    virtual ~EasySoldier() { }
};

} //abstract factory
} //patterns
