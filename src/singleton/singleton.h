/**
 * Filename:  singleton.h
 * Created:   2014/10/15 18:25:40
 * Author:    wangzhongtang
 * Description: 
 *      ��̬ģʽ����֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㡣
 *      �����ߣ�Singleton   ����һ��Instance����������ͻ���������Ψһʵ��
 **/

#ifndef SINGLETON_H
#define SINGLETON_H

namespace Singleton
{

#define DECLARE_SINGLETON(className) \
    private: \
             className() {} \
    friend CSingleton<className>;

    // 
    template <class T>
        class CSingleton
        {
            public:
                static T * instance();
            protected:
                CSingleton() {}
                CSingleton(const CSingleton &);
                CSingleton & operator=(const CSingleton &);
            private:
                class CGarbo
                {
                    public:
                        ~CGarbo() {
                            DELETE_S(CSingleton::_d)
                        }
                };
                static CGarbo _gb;
            private:
                static T * _d;
        };

    template <class T>
        T * CSingleton<T>::_d = NULL;


    template <class T>
        T * CSingleton<T>::instance()
        {
            if (_d == NULL) {
                if (_d == NULL) {
                    _d = new T();
                }
            }
            return _d;
        }

}

#endif  // SINGLETON_H
