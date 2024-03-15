//字符串，c语言中没有字符串类型，但是用双引号包裹起来的是字符串
//字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候，\0是结束标志，不算做字符串的内容 
#include <stdio.h>
#include <string.h>
int main()
{
	char good[] = "abcdef";//[]中的数字可以不写，注意字符串中假如中间有空格，空格也会被算进去
	printf("%s\n", good);

	char bad[] = { 'a','b','c','d','e','f' };
	printf("%s\n", bad);//运行会出问题,没有结束标志

	//应该：
	char yes[] = { 'a','b','c','d','e','f' ,'\0'};//后面有结束标志
	printf("%s\n", yes);

	printf("%d\n", sizeof(good)); //输出7
	printf("%d\n", sizeof(bad)); //输出6
	printf("%d\n", sizeof(yes)); //输出7

	//strlen()是求字符串的长度
	printf("%d\n", strlen(good)); //输出6,\0不算在其中,在使用strlen之前要先调用库函数<string.h>
	printf("%d\n", strlen(bad)); //输出38，这是随机数值，因为没有结束标志
	printf("%d\n", strlen(yes)); //输出6，\0不算在其中


	return 0;
}















