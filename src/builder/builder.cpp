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
        animal()->setHead("����ͷ��");
    }

    void DogBuilder::createBody()
    {
        animal()->setBody("��������");
    }

    void DogBuilder::createForelegs()
    {
        animal()->setForelegs("����ǰ֫");
    }

    void DogBuilder::createHindlges()
    {
        animal()->setHindlegs("���ĺ�֫");
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
