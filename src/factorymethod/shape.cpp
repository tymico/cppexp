#include "shape.h"

#include "global.h"

namespace FactoryMethod
{

    void CCircle::draw()
    {
        std::cout << "circle" << std::endl;
    }

    void CRectangle::draw()
    {
        std::cout << "rectangle" << std::endl;
    }

    void CTriangle::draw()
    {
        std::cout << "triangle" << std::endl;
    }

} // ns FactoryMethod

