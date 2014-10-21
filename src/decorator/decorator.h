/**
 * Filename:  decorator.h
 * Created:   2014/10/19 23:29:09
 * Author:    wangzhongtang
 * Description:   
 *      装饰者模式：动态地给一个对象添加一些额外的职责
 *      别名：Wrapper
 *      参与者：
 *          Component   定义一个对象接口，可以给这些对象动态添加职责
 *          ConcreteComponent   定义一个对象，可以给这个对象添加一些职责(即该对象为被装饰者，)
 *          Decorator   维持一个指向Component对象的指针，并定义一个与Component接口一致的接口
 *          ConcreteDecorator   向组件添加职责
 * 
 **/
#ifndef _DECORATOR_H
#define _DECORATOR_H

namespace Decorator
{

    class CDecorator : public CComponent
    {
    public:
        CDecorator(CComponent * component_ = NULL);
        void setDecorator(CComponent * component_);
        // override
        virtual void show();
    protected:
        CComponent * _component;
    };

    class TShirts : public CDecorator
    {
    public:
        TShirts(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

    class BigTrouser : public CDecorator
    {
    public:
        BigTrouser(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

    class Sneaker : public CDecorator
    {
    public:
        Sneaker(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

    class Garments : public CDecorator
    {
    public:
        Garments(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

    class Necktie : public CDecorator
    {
    public:
        Necktie(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

    class LeatherShoes : public CDecorator
    {
    public:
        LeatherShoes(CComponent * component_ = NULL);
        // override
        virtual void show();
    };

}

#endif // _DECORATOR_H

