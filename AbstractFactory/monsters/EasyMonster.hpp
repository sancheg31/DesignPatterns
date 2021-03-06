#pragma once

#include "AbstractMonster.hpp"

namespace patterns {
namespace abstract_factory {

class EasyMonster: public AbstractMonster
{
public:
    virtual EasyMonster* clone() override {
        return new EasyMonster();
    }
    virtual std::string text() const override {
        return "Easy monster";
    }

    virtual ~EasyMonster() { }
};

} //abstract factory
} //patterns
