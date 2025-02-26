/*********************************************************************
    程序名: 输出一个数列的前10项
    版权:免费
    作者: 丁朝远
    日期: 2024-10-23 11:04
    说明: C语言循环程序设计
*********************************************************************/
//前面3项用变量表示、赋初值并输出
//一个循环处理从第4项开始到第10项的计算
//第n项是前3项和，先求出来；再更新3个变量的值(依次取后一项的值)

#include <stdio.h>

int main() {
	int a, b, c, x, n;
	//前3项的值
	a = 0;
	b = 0;
	c = 1 ;
	n = 4;
//输出前3项
	printf("%d %d %d ", a, b, c);
	while (n <= 10) {
		x = a + b + c;//计算第n项的值
		a = b; //a取n-2项的值
		b = c;//b取n-1项的值
		c = x   ;//c取n项的值，为计算下一项做准备
		printf("%d ", x);
		n++  ;
	}
	printf("\n");
	return 0;
}