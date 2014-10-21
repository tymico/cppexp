// ****************************************
//
// ****************************************
#ifndef SHAPE_H
#define SHAPE_H

namespace FactoryMethod
{

    // abstract product
    class CShape
    {
        public:
            virtual void draw() = 0;
    };

    // concrete product
    class CCircle : public CShape
    {
        public:
            virtual void draw();
    };

    class CRectangle : public CShape
    {
        public:
            virtual void draw();
    };

    class CTriangle : public CShape
    {
        public:
            virtual void draw();
    };

} // ns FactoryMethod


#endif // SHAPE_H
