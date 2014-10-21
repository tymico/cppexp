/**
 * Filename:  creator.h
 * Created:   2014/10/15 18:14:42
 * Author:    wangzhongtang
 * Description:   定义一个用于创建对象的接口，让子类决定实例化哪一个类。
 *      参与者：Product     定义工厂方法所创建的对象的接口
 *              ConcreteProduct     实现Product接口
 *              Creator     声明工厂方法，返回一个Product类型的对象
 *              ConcreteCreator     重定义工厂方法以返回一个ConcreteProduct实例
 **/

#ifndef CREATOR_H
#define CREATOR_H

namespace FactoryMethod
{

    // abstract factory
    class CFactory
    {
        public:
            CFactory();
            virtual ~CFactory();
        public:
            virtual CShape * shape() = 0;
        protected:
            CShape * _shape;
    };

    // concrete factory
    class CCircleFactory : public CFactory
    {
        public:
            virtual CShape * shape();
    };

    class CRectangleFactory : public CFactory
    {
        public:
            virtual CShape * shape();
    };

    class CTriangleFactory : public CFactory
    {
        public:
            virtual CShape * shape();
    };

} // ns FactoryMethod


#endif  // CREATOR_H
