struct sample {
	int   a; // ４バイト
	short b; // ２バイト
	short c; // ２バイト
};
#include <stdio.h>
void test(int x[])
{
	printf("%d\n", x[0]);// a メンバ 
	printf("%d\n", x[1]);// b メンバと c メンバが合わさった形
}
int main()
{
	struct sample x;
	x.a = 5;
	x.b = 6;
	x.c = 7;
	test(&x.a);
}
