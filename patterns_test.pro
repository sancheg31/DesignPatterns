TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AcyclicVisitor/AcyclicWidget.cpp \
        AcyclicVisitor/BaseAcyclicVisitable.cpp \
        AcyclicVisitor/BasicAcyclicVisitor.cpp \
        AcyclicVisitor/ConcreteAcyclicVisitor.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget1.cpp \
        AcyclicVisitor/ConcreteAcyclicWidget2.cpp \
        CyclicVisitor/BaseCyclicVisitable.cpp \
        CyclicVisitor/BasicVisitor.cpp \
        CyclicVisitor/ConcreteVisitor.cpp \
        CyclicVisitor/ConcreteWidget1.cpp \
        CyclicVisitor/ConcreteWidget2.cpp \
        CyclicVisitor/Widget.cpp \
        main.cpp

HEADERS += \ \
    AcyclicVisitor/AcyclicVisitorExecution.hpp \
    AcyclicVisitor/AcyclicWidget.hpp \
    AcyclicVisitor/BaseAcyclicVisitable.hpp \
    AcyclicVisitor/BasicAcyclicVisitor.hpp \
    AcyclicVisitor/ConcreteAcyclicVisitor.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget1.hpp \
    AcyclicVisitor/ConcreteAcyclicWidget2.hpp \
    CyclicVisitor/BaseCyclicVisitable.hpp \
    CyclicVisitor/BasicVisitor.hpp \
    CyclicVisitor/ConcreteVisitor.hpp \
    CyclicVisitor/ConcreteWidget1.hpp \
    CyclicVisitor/ConcreteWidget2.hpp \
    CyclicVisitor/VisitorExecution.hpp \
    CyclicVisitor/Widget.hpp
