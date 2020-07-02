#pragma once


#include "AbstractSoldier.hpp"

namespace patterns {
namespace abstract_factory {

class EasySoldier: public AbstractSoldier
{
public:
    virtual EasySoldier* clone() override {
        return new EasySoldier();
    }
    virtual std::string text() const override {
        return "Easy soldier";
    }

    virtual ~EasySoldier() { }
};

} //abstract factory
} //patterns
