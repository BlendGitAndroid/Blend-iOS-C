/*
  1. 内存管理
     内存的作用:存储数据.
 
     1). 如何将数据存储到内存之中.
         声明1个变量.然后将数据存储进去.
 
     2). 当数据不再被使用的时候,占用的内存空间如何被释放.
 
 
  2. 内存中的五大区域
 
     栈: 局部变量. 当局部变量的作用域被执行完毕之后,这个局部变量就会被系统立即回收.
     堆: OC对象.使用C函数申请的空间.
     BSS段: 未初始化的全局变量、静态变量. 一旦初始化就回收 并转存到数据段之中.
     数据段: 已经初始化的全局变量、静态变量. 直到程序结束的时候才会被回收.
     代码段: 代码. 程序结束的时候,系统会自动回收存储在代码段中的数据.
 
     栈、BSS段、数据段、代码段存储在它们中的数据的回收,是由系统自动完成的.不需要我们干预.
 
 
  3. 分配在堆区中的OC对象,是肯定需要被回收的.
 
     iPhone 内存机制.
 
     40M 警告
     45M 警告
     120M 闪退.
 
     存储在堆中的OC对象,系统不会自动回收. 直到程序结束的时候才会被回收.
 
 
  4. 内存管理的范围:
     只需要管理存储在堆中的OC对象的回收.其他区域中的数据的回收是系统自动管理的.
 
 
  5. 对象应该什么时候被回收?
 
     当有人使用这个对象的时候,这个对象就千万不能回收.
     只有在没有任何人使用这个对象的时候,才可以回收.
 
 
  6. 引用计数器
     
     1). 每1个对象都有1个属性.叫做retainCount.叫做引用计数器. 类型是unsigned long 占据8个字节.
         引用计数器的作用: 用来记录当前这个对象有多少个人在使用它.     
         默认情况下,创建1个对象出来 这个对象的引用计数器的默认值是1.
 
     2). 当多1个人使用这个对象的时候.应该先让这个对象的引用计数器的值+1 代表这个对象多1个人使用.
 
     3). 当这个对象少1个人使用的时候.应该先让这个对象的引用计数器的值-1 代表这个对象少1个人使用.
 
     4). 当这个对象的引用计数器变为0的时候.代表这个对象无人使用. 这个时候系统就会自动回收这个对象.
 
 
  7. 如何操作引用计数器.
 
     1). 为对象发送1条retain消息. 对象的引用计数器就会加1. 当多1个人使用对象的时候才发.
 
     2). 为对象发送1条release消息.对象的引用计数器就会减1. 当少1个人使用对象的时候才发.
 
     3). 为对象发送1条retainCount消息. 就可以去到对象的引用计数器的值.
 
     就这样++ -- 当对象的引用计数器变为0的时候,对象就会被系统立即回收.
 
     在对象被回收的时候.会自动调用对象的dealloc方法.
 
 
 
  8. 内存管理的分类
 
     MRC: Manual Reference Counting 手动引用计数.手动内存管理.
 
          当多1个人使用对象的时候,要求程序员手动的发送retain消息.少1个人使用的时候程序员手动的发送relase消息.
 
     2011年之前 iOS5之前
     ARC: Automatic Reference Counting  自动引用计数.自动内存管理.
          系统自动的在合适的地方发送retain relase消息.
 
 
     我们今天学习的MRC.
     学习MRC的理由:
     1). 面试必考 100%
     2). 早期的APP开发使用的MRC技术.
     3). iOS大牛都是从MRC成长起来的. 方便交流.
     4). ARC是基于MRC
  
 */

#import <Foundation/Foundation.h>
#import "Person.h"


int main(int argc, const char * argv[])
{
    
    Person *p1 = [[Person alloc] init];
    
    Person *p2 = p1;
    
    
    
    
//    if(1)
//    {
//        int num = 12;
//        num++;
//    }
//    num++;

    
    
    
    
    
    return 0;
}
