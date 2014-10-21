/**
 * Filename:  builder.h
 * Created:   2014/10/15 18:30:30
 * Author:    wangzhongtang
 * Description:   
 *      ������ģʽ����һ�����Ӷ���Ĺ��������ı�ʾ���룬ʹ��ͬ���Ĺ������̿��Դ�����ͬ�ı�ʾ��
 *      �����ߣ�Builder     Ϊ����һ��Product����ĸ�������ָ������ӿ�
 *              ConcreteBuilder     ���岢ȷ�����������ı�ʾ
 *              Director    ����һ��ʹ��Builder�ӿڵĶ���
 *              Product     ��ʾ������ĸ��Ӷ���
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
