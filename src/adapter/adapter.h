/**
 * Filename:  adapter.h
 * Created:   2014/10/16 16:41:34
 * Author:    wangzhongtang
 * Description:   
 *      适配器模式：将一个类的接口转换成客户希望的另一个接口
 *      别名：Wrapper
 *      参与者：
 *          Target      定义Client使用的与特定领域相关的接口
 *          Adaptee     定义一个已经存在的接口，该接口需要适配
 *          Adapter     对Adaptee的接口和Target的接口进行适配
 *          Client      与符合Target接口的对象协同
 * 
 **/
#ifndef _ADAPTER_H
#define _ADAPTER_H

namespace Adapter
{
    /*
     * 适配器
     */
    class COuterUserInfo : public IUserInfo
    {
    public:
        COuterUserInfo(IOuterUser * user);
        // override
        virtual std::string name() const;
        virtual std::string mobileNumber() const;
        virtual std::string officeTelNumber() const;
        virtual std::string jobPosition() const;
        virtual std::string homeTelNumber() const;
        virtual std::string homeAddress() const;
        virtual void display() const;
    private:
        IOuterUser * _user;
    };
}

#endif // _ADAPTER_H

