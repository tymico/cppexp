#include "facade.h"


namespace Facade
{

    ModenPostOffice::ModenPostOffice()
    {
        _police = new Police();
    }

    ModenPostOffice::~ModenPostOffice()
    {
        DELETE_S(_police);
    }

    void ModenPostOffice::sendLetter(const std::string & content, const std::string & address)
    {
        CLetterProcess lp;
        // 提供写信和填写地址服务
        lp.writeContent(content);
        lp.fillEnvelope(address);
        // 警察检查信件
        if (_police != NULL) {
            _police->checkLetter(&lp);
        }
        // 封装信件并投递
        lp.letterIntoEnvelope();
        lp.sendLetter();
    }


    // test
    void test()
    {
        std::cout << "\t> Facade >" << std::endl;

        ModenPostOffice * postOffice = new ModenPostOffice;

        std::string content = "hello, It's me.";
        std::string address = "Happy Road No. 666";
        postOffice->sendLetter(content, address);

        DELETE_S(postOffice);

        std::cout << "\t< Facade <" << std::endl;
    }

}
