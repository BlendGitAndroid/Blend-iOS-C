//
//  main.c
//  02-作业讲解
//
//  Created by 黑马程序员 on 20/2/25.
//  Copyright © 2020年 itheima. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    
    /*
     编程实现计算几天(如46天)是几周零几 天. 天数要求用户 从控制台输入
     请用户输入1个天数 计算用户输入的天数是几周零几天。
     
     
     50 / 7;
     50 % 7
     
     //思路:
     //1. 先让用户输入1个天数.
    int days = 0;
    printf("亲,请输入天数: ");
    scanf("%d",&days);
     //2. 计算用户输入的天数有多少周零都少天.
      //  方式: 总天数 除以 7  商就是周数 余数就是剩下的天数,
    //求周数. 总天数 / 7;
    
    int week =  days / 7;
    
    //  求剩余的天数, 总天数除以7的余数.
    
    int day =  days % 7;
    
    //3. 输出.
    printf("%d天有%d周零%d天\n",days,week,day);
     */

  
    //12. 请用户从控制台输入1个秒数,求用户输入的秒数是几天几小时几分钟几秒?
    
    //思路.
    //1. 先让用户输入秒数并存储.1008000
    int seconds = 0;
    printf("请输入秒数: ");
    scanf("%d",&seconds);
    //2. 求天数: 用总秒数 除以 1天的秒数 得到的商 就是天数.
    int days =  seconds / (24 * 60 * 60);
    //3. 求小时: 算完天数以后,还剩余了一些秒数.这些秒数是不够1天的.
    //          剩下的秒数有多少小时:
    //          先拿到剩下的秒数. 用总秒数 除以 1天的秒数 得到的余数.
    //          用剩下的秒数 除以 1小时的秒数  商就是小时数.
    int hours = seconds % (24 * 60 * 60) / (60 * 60);
    
    //4. 求分钟: 算完小时以后,还剩余了一些秒数 这些秒数是不够1小时的.
    //          剩下的秒数有多少分钟.
    //          先拿到剩下的秒数. 上1步的余数.
    //          使用上1步的余数 c除以 1分钟的秒数 商就是分钟数 余数就是剩下的秒数.
    int mins =  seconds % (24 * 60 * 60) % (60 * 60) / 60;
    
    //5. 求秒数
    int ss =  seconds % 60;
    
    printf("%d秒一共有%d天%d小时%d分钟%d秒\n",seconds,days,hours,mins,ss);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
