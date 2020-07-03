#pragma once

#include <string>


namespace patterns {
namespace object_factory {

class Shape
{
public:
    virtual std::string text() const {
        return "Shape";
    }
    static int id() {
        return 0;
    }
};

class Rhombus: public Shape
{
public:
    virtual std::string text() const override {
        return "Rhombus";
    }

    static int id() {
        return 1;
    }
};

class Circle: public Shape
{
public:
    virtual std::string text() const override {
        return "Circle";
    }

    static int id() {
        return 2;
    }
};

class Triangle: public Shape
{
public:
    virtual std::string text() const override {
        return "Triangle";
    }

    static int id() {
        return 3;
    }
};


} //object factory
} //patterns

