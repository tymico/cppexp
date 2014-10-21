/**
 * Filename:  builder.h
 * Created:   2014/10/15 18:30:30
 * Author:    wangzhongtang
 * Description:   
 *      构造者模式：将一个复杂对象的构造与它的表示分离，使用同样的构建过程可以创建不同的表示。
 *      参与者：Builder     为创建一个Product对象的各个部件指定抽象接口
 *              ConcreteBuilder     定义并确定它所创建的表示
 *              Director    构造一个使用Builder接口的对象
 *              Product     表示被构造的复杂对象
 *
 **/

#ifndef BUILDER_H
#define BUILDER_H

namespace Builder
{

    // 
    class AnimalBuilder
    {
        public:
            virtual void createHead() = 0;
            virtual void createBody() = 0;
            virtual void createForelegs() = 0;
            virtual void createHindlges() = 0;
            virtual Animal * animal() = 0;
    };

    // 
    class DogBuilder : public AnimalBuilder
    {
        public:
            DogBuilder();
            virtual ~DogBuilder();
        public:
            virtual void createHead();
            virtual void createBody();
            virtual void createForelegs();
            virtual void createHindlges();
            virtual Animal * animal();
        private:
            Animal * _animal;
    };

}

#endif  // BUILDER_H
