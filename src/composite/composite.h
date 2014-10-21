/**
 * Filename:  composite.h
 * Created:   2014/10/18 13:25:34
 * Author:    wangzhongtang
 * Description:   
 *      组合模式：将对象组合成树形结构以表示“部分－整体”的层次结构。
 *      参与者：
 *          Comp   为组合中的对象声明接口；在适当情况下实现所有类共有接口的缺省行为；
 *          Leaf        叶节点类，叶节点没有子对象
 *          Composite   定义子部件行为
 *          Client      通过Comp接口操纵组合部件的对象
 * 
 **/
#ifndef _COMPOSITE_H
#define _COMPOSITE_H

#include <list>

namespace Composite
{

    class Comp
    {
    public:
        Comp(Comp * parent_ = NULL);
        Comp(const std::string & name_, Comp * parent_ = NULL);
        std::string name() const;
        void setName(const std::string & name_);
        Comp * parent();
        void setParent(Comp * parent_);
        virtual void display(int depth) const = 0;
        virtual void lineOfDuty() = 0;
    protected:
        std::string _name;
        Comp * _parent;
    };

    class Company : public Comp
    {
    public:
        Company(Comp * parent_ = NULL);
        Company(const std::string & name_, Comp * parent_ = NULL);
        ~Company();
        void addChild(Comp * child);
        // override
        virtual void display(int depth) const;
        virtual void lineOfDuty();
    protected:
        std::list<Comp *> _children;
    };

    class HRDepartment : public Comp
    {
    public:
        HRDepartment(Comp * parent_ = NULL);
        HRDepartment(const std::string & name_, Comp * parent_ = NULL);
        // override
        virtual void display(int depth) const;
        virtual void lineOfDuty();
    };

    class FinanceDepartment : public Comp
    {
    public:
        FinanceDepartment(Comp * parent_ = NULL);
        FinanceDepartment(const std::string & name_, Comp * parent_ = NULL);
        // override
        virtual void display(int depth) const;
        virtual void lineOfDuty();
    };

}

#endif // _COMPOSITE_H

