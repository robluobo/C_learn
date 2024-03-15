//输入两个整数求和，再输出 
#include <stdio.h>
int main()
{
	int num1,num2;
	printf("请分别输出a，b的值：");
	scanf("%d,%d",&num1,&num2);  //scanf()是输入函数，分别用num1与num2的值来代替d,按照顺序进行代替，符号&别忘 
	printf("num1+num2=%d",num1+num2);
	
	return 0; 
 } 
