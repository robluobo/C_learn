//�ַ�����c������û���ַ������ͣ�������˫���Ű������������ַ���
//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ��������� 
#include <stdio.h>
#include <string.h>
int main()
{
	char good[] = "abcdef";//[]�е����ֿ��Բ�д��ע���ַ����м����м��пո񣬿ո�Ҳ�ᱻ���ȥ
	printf("%s\n", good);

	char bad[] = { 'a','b','c','d','e','f' };
	printf("%s\n", bad);//���л������,û�н�����־

	//Ӧ�ã�
	char yes[] = { 'a','b','c','d','e','f' ,'\0'};//�����н�����־
	printf("%s\n", yes);

	printf("%d\n", sizeof(good)); //���7
	printf("%d\n", sizeof(bad)); //���6
	printf("%d\n", sizeof(yes)); //���7

	//strlen()�����ַ����ĳ���
	printf("%d\n", strlen(good)); //���6,\0����������,��ʹ��strlen֮ǰҪ�ȵ��ÿ⺯��<string.h>
	printf("%d\n", strlen(bad)); //���38�����������ֵ����Ϊû�н�����־
	printf("%d\n", strlen(yes)); //���6��\0����������


	return 0;
}















