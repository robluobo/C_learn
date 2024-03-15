//1.字面常量 
//2.const修饰的常变量 
//3.define定义的标识符常量 
//4.枚举常量 
#include <stdio.h>
int main()
{
	/*
	//1.字面常量 
	0; //
	'w'; //字符
	"asd";//字符串 
	*/ 
	
	/*
	//2.const修饰的常变量
	const int a=10;  //不允许被改变的常变量，是常变量不是常量，本质还是变量，有着常量的属性，因此是常变量 
	a=90;//比如将90装于a中，a=90;会出现报错的情况 
	printf("%d\n",a);
	*/
	
	/*
	//3.define，无法更改数据
	#define a 100   //没有;符号（当然不一定是整数）比如：#define a "abde"（这是字符串）,可以写在开头或者函数中 
	printf("%d\n",a);
	#define a 10   //数据可以这样更改 ，虽然可以更改可以运行，但是重复定义了 
	//a=34;数据不能这样更改，不可运行 
	printf("%d\n",a);
	#define a "asd"  //这是字符串 
	printf("%d\n",a);   //可以运行但是会显示出数字,是因为数字占用d，字符串要占用s 
	printf("%s\n",a); //可以运行，运行出字符串 
	*/

	
	//4.枚举常量
	enum Color
	{
		Red,
		Green,
		Blue//三个可能取值，都是枚举常量，数据不可更改 
		
	};//这里有一个; 
	enum Color c=Red; //向内存申请空间 
	
	//三原色
	//Red Green Blue 
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
