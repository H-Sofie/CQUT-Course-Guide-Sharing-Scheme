/**********************************

本题目要求读入一个整数1~7之间（不考虑输入错误的情况），然后输出需要上课的节数，对应如下：

1 星期一 8节课
2 星期二 10节课
3 星期三 6节课
4 星期四 8节课
5 星期五 6节课
6 今天没有课，可以好好休息一下啦！
7 今天没有课，可以好好休息一下啦！

输入格式:
例如：1

输出格式:
星期一 8节课（一和8之间有一个空格）

输入样例:
1

输出样例:
星期一 8节课

***********************************/

#include <stdio.h>
int num;
int main() {   
    scanf("%d",&num);
    if (num == 1)
    {
        printf("星期一 8节课");
    } else if (num == 2) {
        printf("星期二 10节课");
    } else if (num == 3) {
        printf("星期三 6节课");
    } else if (num == 4) {
        printf("星期四 8节课");
    } else if (num == 5) {
        printf("星期五 6节课");
    } else {
        printf("今天没有课，可以好好休息一下啦！");
    }

return 0;
}