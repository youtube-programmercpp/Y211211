struct sample {
	int   a; // �S�o�C�g
	short b; // �Q�o�C�g
	short c; // �Q�o�C�g
};
#include <stdio.h>
void test(int x[])
{
	printf("%d\n", x[0]);// a �����o 
	printf("%d\n", x[1]);// b �����o�� c �����o�����킳�����`
}
int main()
{
	struct sample x;
	x.a = 5;
	x.b = 6;
	x.c = 7;
	test(&x.a);
}
