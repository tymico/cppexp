/**
 * Filename:  facade.h
 * Created:   2014/10/23 22:49:33
 * Author:    wangzhongtang
 * Description:   
 *      门面模式：为子系统中的一组接口提供一个一致的界面。
 *      参与者：
 *          Facade      将客户的请求代理给适当的子系统对象
 *          SubSystem Classes   实现子系统的功能，处理由Facade指派的任务，不包含任何Facade的信息
 * 
 **/
#ifndef _FACADE_H
#define _FACADE_H

namespace Facade
{
    class Police;

    class ModenPostOffice
    {
    public:
        ModenPostOffice();
        ~ModenPostOffice();
        void sendLetter(const std::string & content, const std::string & address);
    private:
        Police * _police;
    };


    void test();

}

#endif // _FACADE_H

