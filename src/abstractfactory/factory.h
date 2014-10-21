/**
 * Filename:  factory.h
 * Created:   2014/10/15 18:20:27
 * Author:    wangzhongtang
 * Description:   抽象工厂，提供一个创建一系列相关或相互依赖的对象的接口，而无需指定它们具体的类。
 *          别名：Kit
 *          参与者：AbstractFactory     声明一个创建抽象产品对象的操作接口
 *                  ConcreteFactory     实现创建具体产品对象的操作
 *                  AbstractProduct     为一类产品对象声明一个接口
 *                  ConcreteProduct     定义一个将被相应的具体工厂创建的产品对象
 *                  Client      仅使用AbstractFactory和AbstractProduct接口
 * 
 **/

#ifndef FACTORY_H
#define FACTORY_H

namespace AbstractFactory
{

    // abstract factory
    class CFactory
    {
        public:
            virtual CMouse * mouse() = 0;
            virtual CKeyboard * keyboard() = 0;
    };

    // concrete factory
    class CAsusFactory : public CFactory
    {
        public:
            CAsusFactory();
            virtual ~CAsusFactory();
        public:
            virtual CMouse * mouse();
            virtual CKeyboard * keyboard();
        private:
            CMouse * _mouse;
            CKeyboard * _keyboard;
    };

    class CAcerFactory : public CFactory
    {
        public:
            CAcerFactory();
            virtual ~CAcerFactory();
        public:
            virtual CMouse * mouse();
            virtual CKeyboard * keyboard();
        private:
            CMouse * _mouse;
            CKeyboard * _keyboard;
    };

}

#endif  // FACTORY_H
