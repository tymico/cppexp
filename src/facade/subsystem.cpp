#include "subsystem.h"


namespace Facade
{

    void CLetterProcess::writeContent(const std::string & content_)
    {
        std::cout << "写信：" << content_ << std::endl;
    }

    void CLetterProcess::fillEnvelope(const std::string & address_)
    {
        std::cout << "填写地址: " << address_ << std::endl;
    }

    void CLetterProcess::letterIntoEnvelope()
    {
        std::cout << "放入信封" << std::endl;
    }

    void CLetterProcess::sendLetter()
    {
        std::cout << "投递信件" << std::endl;
    }


    ////////////////////////////////////////
    void Police::checkLetter(ILetterProcess * lp)
    {
        if (lp != NULL) {
            std::cout << "检查信件" << std::endl;
        }
    }

}
