
#include <iostream>
#include <vector>

using namespace std;

#include "CyclicVisitor/VisitorExecution.hpp"
#include "AcyclicVisitor/AcyclicVisitorExecution.hpp"
#include "AbstractFactory/AbstractFactoryExecution.hpp"

#include "ObjectFactory/ObjectFactoryExecution.hpp"

using namespace patterns::object_factory;

int main() {

    patterns::visitor::VisitorExecution exec1;
    exec1.execute();
    patterns::acyclic_visitor::AcyclicVisitorExecution exec2;
    exec2.execute();
    patterns::abstract_factory::AbstractFactoryExecution exec3;
    exec3.execute();
    patterns::object_factory::ObjectFactoryExecution exec4;
    exec4.execute();
    return 0;
}
