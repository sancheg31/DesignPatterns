
#include <iostream>
#include <vector>

using namespace std;

#include "Visitor/VisitorExecution.hpp"
#include "AcyclicVisitor/AcyclicVisitorExecution.hpp"

int main() {

    patterns::visitor::VisitorExecution exec1;
    exec1.execute();
    patterns::acyclic_visitor::AcyclicVisitorExecution exec2;
    exec2.execute();
    return 0;
}
