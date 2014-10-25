/**
 * Filename:  subsystem.h
 * Created:   2014/10/23 22:58:35
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _SUBSYSTEM_H
#define _SUBSYSTEM_H

namespace Facade
{

    class ILetterProcess
    {
    public:
        virtual void writeContent(const std::string & content_) = 0;
        virtual void fillEnvelope(const std::string & address_) = 0;
        virtual void letterIntoEnvelope() = 0;
        virtual void sendLetter() = 0;
    };

    class CLetterProcess : public ILetterProcess
    {
    public:
        virtual void writeContent(const std::string & content_);
        virtual void fillEnvelope(const std::string & address_);
        virtual void letterIntoEnvelope();
        virtual void sendLetter();
    };

    class Police
    {
    public:
        void checkLetter(ILetterProcess * lp);
    };

}

#endif // _SUBSYSTEM_H

