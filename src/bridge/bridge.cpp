#include "bridge.h"

namespace Bridge
{

    void test()
    {
        std::cout << "\t> Bridge >" << std::endl;
        HandsetSoftware * game = new HandsetSoftwareGame;
        HandsetSoftware * addressList = new HandsetSoftwareAddressList;

        HandsetPhone * iphone = new IPhone(game);
        iphone->run();
        iphone->setSoftware(addressList);
        iphone->run();

        HandsetPhone * nokia = new Nokia(game);
        nokia->run();
        nokia->setSoftware(addressList);
        nokia->run();

        DELETE_S(nokia)
        DELETE_S(iphone)
        DELETE_S(addressList)
        DELETE_S(game)
        std::cout << "\t< Bridge <" << std::endl;
    }

}
