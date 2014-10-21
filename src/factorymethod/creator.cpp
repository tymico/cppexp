#include "creator.h"


namespace FactoryMethod
{

    CFactory::CFactory()
        : _shape(NULL)
    {

    }

    CFactory::~CFactory()
    {
        DELETE_S(_shape);
    }


    CShape * CCircleFactory::shape()
    {
        if (_shape == NULL) {
            _shape = new CCircle();
        }
        return _shape;
    }


    CShape * CRectangleFactory::shape()
    {
        if (_shape == 0) {
            _shape = new CRectangle();
        }
        return _shape;
    }


    CShape * CTriangleFactory::shape()
    {
        if (_shape == 0) {
            _shape = new CTriangle();
        }
        return _shape;
    }

    void test()
    {
        // FactoryMethod begin
        std::cout << "\t> FactoryMethod >" << std::endl;

        CFactory * factory = new CCircleFactory();
        factory->shape()->draw();
        DELETE_S(factory);
        factory = new CRectangleFactory();
        factory->shape()->draw();
        DELETE_S(factory);
        factory = new CTriangleFactory();
        factory->shape()->draw();
        DELETE_S(factory);

        std::cout << "\t< FactoryMethod <" << std::endl;
    }

}   // ns FactoryMethod
