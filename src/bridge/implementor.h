/**
 * Filename:  implementor.h
 * Created:   2014/10/18 10:36:47
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _IMPLEMENTOR_H
#define _IMPLEMENTOR_H

namespace Bridge
{

    class HandsetSoftware
    {
    public:
        virtual void run() = 0;
    };

    class HandsetSoftwareGame : public HandsetSoftware
    {
    public:
        // override
        virtual void run();
    };

    class HandsetSoftwareAddressList : public HandsetSoftware
    {
    public:
        // override
        virtual void run();
    };

}

#endif // _IMPLEMENTOR_H

