#include "decorator.h"

namespace Decorator
{

    CDecorator::CDecorator(CComponent * component_)
        : _component(component_)
    {
    }

    void CDecorator::setDecorator(CComponent * component_)
    {
        _component = component_;
    }

    void CDecorator::show()
    {
        if (_component != NULL) {
            _component->show();
        }
    }

    ////////////////////////////////////////
    TShirts::TShirts(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void TShirts::show()
    {
        std::cout << "T恤 ";
        CDecorator::show();
    }

    ////////////////////////////////////////
    BigTrouser::BigTrouser(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void BigTrouser::show()
    {
        std::cout << "垮裤 ";
        CDecorator::show();
    }

    ////////////////////////////////////////
    Sneaker::Sneaker(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void Sneaker::show()
    {
        std::cout << "球鞋 ";
        CDecorator::show();
    }

    ////////////////////////////////////////
    Garments::Garments(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void Garments::show()
    {
        std::cout << "西装 ";
        CDecorator::show();
    }

    ////////////////////////////////////////
    Necktie::Necktie(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void Necktie::show()
    {
        std::cout << "领带 ";
        CDecorator::show();
    }

    ////////////////////////////////////////
    LeatherShoes::LeatherShoes(CComponent * component_)
        : CDecorator(component_)
    {
    }

    void LeatherShoes::show()
    {
        std::cout << "皮鞋 ";
        CDecorator::show();
    }

    // test
    void test()
    {
        std::cout << "\t> Decorator >" << std::endl;

        CComponent * person = new CPerson("小黑");
        CDecorator * sneaker = new Sneaker(person);
        CDecorator * bigTrouser = new BigTrouser(sneaker);
        CDecorator * tshirts = new TShirts(bigTrouser);
        tshirts->show();

        CDecorator * leatherShoes = new LeatherShoes;
        CDecorator * necktie = new Necktie;
        CDecorator * garments = new Garments;
        leatherShoes->setDecorator(person);
        necktie->setDecorator(leatherShoes);
        garments->setDecorator(necktie);
        garments->show();

        DELETE_S(tshirts);
        DELETE_S(bigTrouser);
        DELETE_S(sneaker);
        DELETE_S(garments);
        DELETE_S(necktie);
        DELETE_S(leatherShoes);
        DELETE_S(person);

        std::cout << "\t< Decorator <" << std::endl;
    }

}
