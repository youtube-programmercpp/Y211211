#include <string.h>
int main()
{
	int a[] = {5, 6, 7};//初期化（initialization）
	int b[] = { 8, 9, 10 };
	//memcpy の動き
	char* p = (char*)a;
	char* q = (char*)b;
	for (int i = 0;i < 12;++i)
		*p++ = *q++;
}
