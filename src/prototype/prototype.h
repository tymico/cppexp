/**
 * Filename:  prototype.h
 * Created:   2014/10/16 11:18:19
 * Author:    wangzhongtang
 * Description:   
 *      原型模式：用原型实例指定创建对象的种类，并且通过这些拷贝这些原型对象创建新的对象。
 *      参与者：Prototype   声明一个克隆自身的接口
 *              ConcretePrototype   实现一个克隆自身的操作
 *              Client  让一个原型克隆自身从而创建一个新的对象
 * 
 **/
#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

namespace Prototype
{
    class CCloneable
    {
    public:
        virtual CCloneable * clone() = 0;
    };

    /*
     * 简历类
     */
    class CResume : public CCloneable
    {
    public:
        CResume();
        CResume(const CResume & other);
        CResume(const std::string & name);
        void setName(const std::string & name);
        void setPersonalInfo(const std::string & sex, int age);
        void setWorkExperience(const std::string & timeArea, const std::string & company);
        void display() const;
        // override
        virtual CCloneable * clone();
    private:
        std::string _name;
        std::string _sex;
        int _age;
        std::string _time_area;
        std::string _company;
    };
}

#endif // _PROTOTYPE_H

