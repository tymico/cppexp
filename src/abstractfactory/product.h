#ifndef PRODUCT_H
#define PRODUCT_H

namespace AbstractFactory
{

    // abstract product
    class CMouse
    {
        public:
            virtual void show() = 0;
    };

    class CKeyboard
    {
        public:
            virtual void show() = 0;
    };

    // concrete product
    class CAsusMouse : public CMouse
    {
        public:
            virtual void show();
    };

    class CAcerMouse : public CMouse
    {
        public:
            virtual void show();
    };

    class CAsusKeyboard : public CKeyboard
    {
        public:
            virtual void show();
    };

    class CAcerKeyboard : public CKeyboard
    {
        public:
            virtual void show();
    };

}

#endif  // PRODUCT_H
