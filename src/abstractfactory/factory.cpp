#include "factory.h"


namespace AbstractFactory
{

CAsusFactory::CAsusFactory()
    : _mouse(0), _keyboard(0)
{

}

CAsusFactory::~CAsusFactory()
{
    DELETE_S(_mouse);
    DELETE_S(_keyboard);
}

CMouse * CAsusFactory::mouse()
{
    if (_mouse == 0) {
        _mouse = new CAsusMouse();
    }
    return _mouse;
}

CKeyboard * CAsusFactory::keyboard()
{
    if (_keyboard == 0) {
        _keyboard = new CAsusKeyboard();
    }
    return _keyboard;
}

CAcerFactory::CAcerFactory()
    : _mouse(0), _keyboard(0)
{

}

CAcerFactory::~CAcerFactory()
{
    DELETE_S(_mouse);
    DELETE_S(_keyboard);
}

CMouse * CAcerFactory::mouse()
{
    if (_mouse == 0) {
        _mouse = new CAcerMouse();
    }
    return _mouse;
}

CKeyboard * CAcerFactory::keyboard()
{
    if (_keyboard == 0) {
        _keyboard = new CAcerKeyboard();
    }
    return _keyboard;
}


void test()
{
    // AbstractFactory begin
    std::cout << "\t> AbstractFactory >" << std::endl;

    CFactory * factory = new CAsusFactory();
    factory->mouse()->show();
    factory->keyboard()->show();
    DELETE_S(factory);

    factory = new CAcerFactory();
    factory->mouse()->show();
    factory->keyboard()->show();
    DELETE_S(factory);

    std::cout << "\t< AbstractFactory <" << std::endl;
    // AbstractFactory end
}

}
