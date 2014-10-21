#include "builder.h"


namespace Builder
{

    DogBuilder::DogBuilder()
        : _animal(new Dog())
    {

    }

    DogBuilder::~DogBuilder()
    {
        DELETE_S(_animal)
    }

    void DogBuilder::createHead()
    {
        animal()->setHead("狗的头部");
    }

    void DogBuilder::createBody()
    {
        animal()->setBody("狗的身体");
    }

    void DogBuilder::createForelegs()
    {
        animal()->setForelegs("狗的前肢");
    }

    void DogBuilder::createHindlges()
    {
        animal()->setHindlegs("狗的后肢");
    }

    Animal * DogBuilder::animal()
    {
        if (_animal == NULL) {
            _animal = new Dog();
        }
        return _animal;
    }

    void test() {
        // Builder begin
        std::cout << "\t> Builder >" << std::endl;

        AnimalDirector ad;
        DogBuilder db;
        Animal * a = ad.buildAnimal(&db);
        std::cout << a->getHead() << std::endl;
        std::cout << a->getBody() << std::endl;
        std::cout << a->getForelegs() << std::endl;
        std::cout << a->getHindlegs() << std::endl;

        // Builder end
        std::cout << "\t< Builder <" << std::endl;
    }

}
