#include <string.h>
int main()
{
	int a[] = {5, 6, 7};//�������iinitialization�j
	int b[] = { 8, 9, 10 };
	//memcpy �̓���
	char* p = (char*)a;
	char* q = (char*)b;
	for (int i = 0;i < 12;++i)
		*p++ = *q++;
}
