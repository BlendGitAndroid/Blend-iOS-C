/*
 
  1. 在执行scanf函数的时候,会让用户输入1个数据.
     数据输入完毕之后,并不是将这个数据直接赋值给变量.
     而是先将数据存储在缓冲区 输入的任何数据都会存储在缓冲区中.
 
  2. 在执行scanf函数的时候.会先检查缓冲区中是否有数据.
     如果缓冲区中没有数据.那么就会让用户从键盘输入.
     如果缓冲区中有数据. 直接从缓冲区中将数据拿出来. 不会让用户输入数据.
 
 
  3. 当从缓冲区中拿数据的时候,如果要拿的数据的类型是整型或者实型.
     如果拿到的是空格 回车 Tab键 就会被自动忽略.继续往下拿.
 
     如果要拿的数据的类型是字符型.不会忽略任何数据.
     所以.当我们数字和字符混合输入的时候.字符的接收就有可能会出问题.
 
 
     解决方案: 在输入字符之前,将缓冲区中的数据全部清空.
 
     rewind(stdin);
 
 
 
 
 
 
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[])
{
//    //1.让用户输入1个整数.
//    int num = 0;
//    printf("请输入第1个数: ");
//    scanf("%d",&num);
//    printf("num = %d\n",num);
//    //2. 让用户再输入1个字符.
//    char ch = 'a';
//    printf("请输入1个字符: ");
//    //在执行这句话之前 缓冲区中没有任何数据.
//    
//    rewind(stdin);//这句代码的作用将缓冲区中的数据全部清空.
//    
//    scanf("%c",&ch);//
//    printf("ch=%c",ch);
    
    
    

//    int num = 0;
//    printf("请输入第1个数: ");
//    scanf("%d",&num);
//    printf("num = %d\n",num);
//    
//    
//    int num1 = 0;
//    printf("请输入第2个数: ");
//    scanf("%d",&num1);
//    printf("num1 = %d\n",num1);
    
    
    
    
    
    
    return 0;
}
