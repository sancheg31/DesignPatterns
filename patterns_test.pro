TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AcyclicVisitor/AcyclicWidget.cpp \
        AcyclicVisitor/AcyclicWidgetVisitor.cpp \
        AcyclicVisitor/BasicAcyclicVisitor.cpp \
        AcyclicVisitor/ConcreteAcyclicVisitor.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget1.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget1Visitor.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget2.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget2Visitor.cpp \
        Visitor/BasicVisitor.cpp \
        Visitor/ConcreteVisitor.cpp \
        Visitor/ConcreteWidget1.cpp \
        Visitor/ConcreteWidget2.cpp \
        Visitor/Widget.cpp \
        main.cpp

HEADERS += \ \
    AcyclicVisitor/AcyclicVisitorExecution.hpp \
    AcyclicVisitor/AcyclicWidget.hpp \
    AcyclicVisitor/AcyclicWidgetVisitor.hpp \
    AcyclicVisitor/BasicAcyclicVisitor.hpp \
    AcyclicVisitor/ConcreteAcyclicVisitor.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget1.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget1Visitor.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget2.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget2Visitor.hpp \
    Visitor/BasicVisitor.hpp \
    Visitor/ConcreteVisitor.hpp \
    Visitor/ConcreteWidget1.hpp \
    Visitor/ConcreteWidget2.hpp \
    Visitor/VisitorExecution.hpp \
    Visitor/Widget.hpp
