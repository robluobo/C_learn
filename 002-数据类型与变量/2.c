//数据类型 
#include <stdio.h>
//int a=4；(全局变量) 
int main()
{
	printf("%d\n",sizeof(char));  //1 表示占一个字节，下面依次类推 ,char字符数据类型 
	printf("%zu\n",sizeof(short int));  //2 sizeof()的作用，zu，d的使用 
	printf("%zu\n",sizeof(int));  //4
	printf("%zu\n",sizeof(long int));  //4 sizeof(long)>=sizeof(int) 
	printf("%zu\n",sizeof(long long int));  //8
	printf("%zu\n",sizeof(float));  //4 单精度浮点数 
	printf("%zu\n",sizeof(double));  //8 双精度浮点数，精度相比于float高 
	
	int c=20; //向内存申请了int大小的空间，存放一定的数据，将20存放在c中(定义变量的方法)
	int d;//向内存申请int大小空间 
	d=90; //将90存放在b中 ，局部变量，在同一个范围内一个变量只能出现一次，不能重复定义
	/*比如下面的重复定义的变量 
	int m=8；
	int m=90；
	*/
	//但是全局变量与局部变量的名字可以相同，且局部优先，但是不建议这样做 
	return 0;
}

//bit，byte（字节），kb，mb，gb，tb，pb 
//计算机中的单位，1byte=8bit，其他是1024倍数(网搜)





























































 

 



























