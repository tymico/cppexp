#include "component.h"


namespace Decorator
{

    CPerson::CPerson(const std::string & name_)
        : _name(name_)
    {
    }

    void CPerson::show()
    {
        std::cout << "装扮的" << _name << std::endl;
    }

}

