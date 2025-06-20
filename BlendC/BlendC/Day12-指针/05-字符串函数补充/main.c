/*
 
 1. fputs();  f --> File
 
    作用: 将字符串数据 输出到 指定的流中.
         流: 标准输出流->控制台.
             文件流 --> 磁盘上的文件.
 
 
 
    使用格式:
    fputs(要输出的字符串,指定的流);
 
    1). 要使用fputs函数将字符串数据输出到标准输出流.
        标准输出流: 控制台. stdout
 
 
 
    2). 将字符串存储到文件中.
 
        a. 要先声明1个文件指针.指向磁盘上的文件.
 
           fopen函数可以创建1个指向文件的指针.
 
           fopen函数的两个参数:
 
           第1个参数: 文件的路径,代表创建的指针就指向这个文件.
           第2个参数: 操作文件的模式. 你要对这个文件做什么操作.必须要告诉他.
                    "w"  --> write  代表你要向这个文件写入内容.
                    "r"  --> read   代表你从这个文件中读取数据.
                    "a"  --> apped  追加 代表你向这个文件中追加数据
 
 
 
           当操作模式是"w"的时候,如果文件不存在. 就会创建这个文件.
                              如果文件存在. 就会将原来的文件替换掉.
 
 
           当操作模式是"a"的时候.如果文件存在,则追加.如果不存在就创建这个文件.
 
    
        b. 使用fputs函数将字符串写入到指定的文件流中.
 
            fputs(字符串,文件指针);
 
 
        c. 写完之后,一定要记得使用fclose()函数 将这个文件关闭.
 
 
 
 
 2. fgets()函数.
 
    作用: 从指定的流中读取字符串.
         这个流可以是我们的标准输入流-->控制台.
             也可以是我们的文件流.
 
 
 
    1). 使用fgets函数从标准输入流中读取数据.
        使用fgets函数从控制台接收用户输入字符串.
 
 
        前面学习的scanf函数gets函数也可以实现这个功能.

        scanf的缺点
        a. 不安全.
        b. 输入的空格会被认为结束.
 
 
        gets函数的缺点.
        a. 不安全.
 
 
        fgets函数的优点
        a. 安全
        b. 空格也会一并接收.
 
 
        语法:  fgets(要将字符串存储到哪1个数组中,最多接收多少个长度的字符串,指定流);
        第2个参数: 我们写1个n 那么函数最多就接收n-1个长度的字符串.
                  这个参数一般情况下和第1个参数数组的长度一致.
 
        stdin: 代表标准输入流. 也就是键盘流 控制台输入.
 
 
        为什么是安全的?
 
        a. 如果我们输入的字符串的长度大于等于了 第2个参数n. 只会接收前面的n-1个. 然后最后1个自动是'\0'.
           这样,就不会崩了.
 
        b. 如果我们输入的字符串的长度刚好等于n-1 那就是最完美的.
 
        c. 如果我们输入的字符串的长度小于了n-1. 那么就会将我们最后输入的换行字符'\n'一并的接收.
           然后后面才是'\0'结束符.
 
 
        解决方案: 输入完毕之后,判断字符数组中存储的字符串最后1个是不是'\n'
                 如果是'\n' 那么就将其替换为'\0'.
 
 
 
    2). 使用fgets函数从文件流中读取数据:
        就是读取磁盘上文件的内容.
 
        a. 先创建1个文件指针.
             //1. 创建1个读取文件的文件流.
             FILE* pFile = fopen("/Users/Itcast/Desktop/abc.txt", "r");
 
        b. 准备1个字符数组.准备存储读取到的字符串数据.
            
             char content[50];
 
        c. 使用fgets函数从指定的文件流中读取.
 
            fgets(content, 50, pFile);

        d. 读取成功:
            printf("读取的内容是: %s\n",content);

        e. 关闭文件流
            fclose(pFile);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    
    //注册登录.
    //1. 注册. 用户名和密码. 注册完毕之后,将用户名和密码存储在文件中 users.txt
    //                        admin 888888
    //2. 登录. admin 888888

    
//    //1. 创建1个读取文件的文件流.
//    FILE* pFile = fopen("/Users/Itcast/Desktop/abc.txt", "r");
//    
//    //2.准备1个字符数组.准备存储读取到的字符串数据.
//    char content[50];
//    
//    //3.使用fgets函数从指定的文件流中读取.
//    
//    fgets(content, 50, pFile);
//    
//    //4. 输出.
//    
//    printf("读取的内容是: %s\n",content);
//    
//    //5. 关闭文件流.
//    fclose(pFile);
//    
//    
//    while (1)
//    {
//        
//    }
//    
    
    
    
    
    
//    char input[5];
//    
//    printf("请输入:\n");
//    fgets(input, 5, stdin);
//    
//    size_t len = strlen(input);
//    if(input[len - 1] == '\n')
//    {
//        input[len-1] = '\0';
//    }
//    
//    
//    
//    
//    
//    
//    printf("你输入的是:%s\n",input);
//    
    
 
//    FILE* pFile = fopen("/Users/Itcast/Desktop/abc.txt", "a");
//    
//    
//    char *name = "我爱黑马";
//
//    fputs(name, pFile);
//    
//    
//    fclose(pFile);
//    
//    
//    printf("写入成功!\n");
//    
    
    
  
    
    
    
    
    
    return 0;
}
