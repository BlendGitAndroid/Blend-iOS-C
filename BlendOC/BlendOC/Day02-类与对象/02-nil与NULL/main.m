/*
  1. NULL 
 
     只能作为指针变量的值. 如果1个指针变量的值是NULL值代表. 代表这个指针不指向内存中的任何1块空间
 
     NULL其实等价于0  NULL其实是1个宏. 就是0
 
 
  2. nil
 
     只能作为指针变量的值. 代表这个指针变量不指向内存中的任何空间. 
     nil其实也等价于0 也是1个宏. 就是0.
 
     所以, NULL和nil其实是一样的 。
 
 
  3. 使用建议.
    
     虽然使用NULL的地方可以是nil 使用 nil的地方可以使用NULL 但是不建议大家去随便使用.
 
     C指针用NULL
         int *p1 = NULL; p1指针不指向内存中的任何1块空间.
 
     OC的类指针用nil
         Person *p1 = nil; p1指针不指向任何对象.
 
 
  4. 如果1个类指针的值为nil 代表这个指针不指向任何对象.
     Person *p1 = nil;
 
     那么这个时候 如果通过p1指针去访问p1指针指向的对象的属性 这个时候会运行报错.
     那么这个时候,如果通过p1指针去调用对象的方法 运行不会报错 但是方法不会执行 没有任何反应
 
 
 
 
 */

#import <Foundation/Foundation.h>

@interface Person: NSObject
{
@public
    NSString *_name;
    int _age;
    int *_p1;
}

- (void)sayHi;

@end

@implementation Person

- (void)sayHi
{
    NSLog(@"大家好,我叫%@，我今年%d岁",_name,_age);
}

@end

int main(int argc, const char * argv[])
{
   
  
    Person *p1 = nil;
//    p1->_name = @"jack";
//    p1->_age = 19;
    
    [p1 sayHi];
    
    
    NSLog(@"haha");
    
    
    
    
    
    
    return 0;
}
