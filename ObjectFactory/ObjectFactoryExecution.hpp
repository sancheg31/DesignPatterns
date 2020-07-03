#pragma once

#include "ObjectFactory.hpp"
#include "CloneFactory.hpp"
#include "ShapeHierarchy.hpp"

#include <iostream>


namespace patterns {
namespace object_factory {

using ShapeFactory = ObjectFactory<Shape, int, std::function<Shape*()>>;

class ObjectFactoryExecution
{
public:
    void execute() {
        ShapeFactory* factory = new ShapeFactory();
        factory->registerType(Rhombus::id(), []() { return new Rhombus(); });
        factory->registerType(Triangle::id(), []() { return new Triangle(); });
        factory->registerType(Circle::id(), []() { return new Circle(); });
        std::cout << "Shape factory execution" << '\n';
    }
};


} //object factory
} //patterns
