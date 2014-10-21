#include "product.h"

#include "global.h"

namespace AbstractFactory
{

void CAsusMouse::show()
{
    std::cout << "asus mouse" << std::endl;
}

void CAsusKeyboard::show()
{
    std::cout << "asus keyboard" << std::endl;
}

void CAcerMouse::show()
{
    std::cout << "acer mouse" << std::endl;
}

void CAcerKeyboard::show()
{
    std::cout << "acer keyboard" << std::endl;
}

}
