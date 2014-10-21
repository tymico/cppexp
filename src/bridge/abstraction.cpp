#include "abstraction.h"


namespace Bridge
{

    HandsetPhone::HandsetPhone(HandsetSoftware * software)
        : _software(software)
    {
    }

    void HandsetPhone::setSoftware(HandsetSoftware * software)
    {
        _software = software;
    }

    ////////////////////////////////////////
    IPhone::IPhone(HandsetSoftware * software)
        : HandsetPhone(software)
    {
    }

    void IPhone::run()
    {
        if (_software == NULL) {
            return;
        }
        std::cout << "苹果手机" << std::endl;
        _software->run();
    }


    /**********************************/
    Nokia::Nokia(HandsetSoftware * software)
        : HandsetPhone(software)
    {
    }

    void Nokia::run()
    {
        if (_software == NULL) {
            return;
        }
        std::cout << "诺基亚手机" << std::endl;
        _software->run();
    }
}

