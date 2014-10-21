/**
 * Filename:  abstraction.h
 * Created:   2014/10/18 10:36:51
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _ABSTRACTION_H
#define _ABSTRACTION_H

namespace Bridge
{

    class HandsetPhone
    {
    public:
        HandsetPhone(HandsetSoftware * software);
        void setSoftware(HandsetSoftware * software);
        virtual void run() = 0;
    protected:
        HandsetSoftware * _software;
    };

    class IPhone : public HandsetPhone
    {
    public:
        IPhone(HandsetSoftware * software);
        // override
        virtual void run();
    };

    class Nokia : public HandsetPhone
    {
    public:
        Nokia(HandsetSoftware * software);
        // override
        virtual void run();
    };

}

#endif // _ABSTRACTION_H

