/**
 * Filename:  flyweight.h
 * Created:   2014/10/25 22:34:50
 * Author:    wangzhongtang
 * Description:   
 *      享元模式：运用共享技术有效地支持大量细粒度的对象
 *      参与者：
 *          Flyweight   描述一个接口，通过这个接口flyweight可以接受并作用于外部状态
 *          ConcreteFlyweight   实现Flyweight接口，并为内部状态(如果有的话)增加存储空间。
 *                  ConcreteFlyweight对象必须是可共享的
 *          UnsharedConcreteFlyweight   在Flyweight对象结构的某些层次，UnsharedConcreteFlyweight
 *                  对象通常将ConcreteFlyweight对象作为子结点
 *          FlywightFactory     创建并管理flyweight对象。确保合理地共享flyweight
 *          Client      维持一个对flyweight的引用。计算或存储flyweight的外部状态
 * 
 **/
#ifndef _FLYWEIGHT_H
#define _FLYWEIGHT_H

namespace Flyweight
{



}

#endif // _FLYWEIGHT_H

