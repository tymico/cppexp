/**
 * Filename:  bridge.h
 * Created:   2014/10/18 10:30:22
 * Author:    wangzhongtang
 * Description:   
 *      桥接模式：将抽象部分与其实现部分分离，使它们可以独立地变化。
 *      别名：Handle/Body
 *      参与者：Abstraction     定义抽象类的接口，维护一个指向Implementor类型对象的指针
 *              RefinedAbstraction  扩充Abstraction定义的接口
 *              Implementor     定义实现类的接口
 *              ConcreteImplementor     实现Implementor接口并定义它的具体实现
 * 
 **/
#ifndef _BRIDGE_H
#define _BRIDGE_H

namespace Bridge
{
    void test();
}

#endif // _BRIDGE_H

