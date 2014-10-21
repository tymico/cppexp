/**
 * Filename:  component.h
 * Created:   2014/10/19 23:29:27
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _COMPONENT_H
#define _COMPONENT_H

namespace Decorator
{

    class CComponent
    {
    public:
        virtual void show() = 0;
    };

    class CPerson : public CComponent
    {
    public:
        CPerson(const std::string & name_);
        // override
        virtual void show();
    private:
        std::string _name;
    };

}

#endif // _COMPONENT_H

