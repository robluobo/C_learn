//�������� 
#include <stdio.h>
//int a=4��(ȫ�ֱ���) 
int main()
{
	printf("%d\n",sizeof(char));  //1 ��ʾռһ���ֽڣ������������� ,char�ַ��������� 
	printf("%zu\n",sizeof(short int));  //2 sizeof()�����ã�zu��d��ʹ�� 
	printf("%zu\n",sizeof(int));  //4
	printf("%zu\n",sizeof(long int));  //4 sizeof(long)>=sizeof(int) 
	printf("%zu\n",sizeof(long long int));  //8
	printf("%zu\n",sizeof(float));  //4 �����ȸ����� 
	printf("%zu\n",sizeof(double));  //8 ˫���ȸ����������������float�� 
	
	int c=20; //���ڴ�������int��С�Ŀռ䣬���һ�������ݣ���20�����c��(��������ķ���)
	int d;//���ڴ�����int��С�ռ� 
	d=90; //��90�����b�� ���ֲ���������ͬһ����Χ��һ������ֻ�ܳ���һ�Σ������ظ�����
	/*����������ظ�����ı��� 
	int m=8��
	int m=90��
	*/
	//����ȫ�ֱ�����ֲ����������ֿ�����ͬ���Ҿֲ����ȣ����ǲ����������� 
	return 0;
}

//bit��byte���ֽڣ���kb��mb��gb��tb��pb 
//������еĵ�λ��1byte=8bit��������1024����(����)





























































 

 



























