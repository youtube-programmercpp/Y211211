class Test1 {
	int a;
	int b;
};
struct Test2 {
	int a;
	int b;
};
int main()
{
	Test1 x;
	Test2 y;

	int* p = (int*)&x;//����� &x.a �Ɠ���
	*p = 5;//x.a �� 5 ������
	++p;
	*p = 6;//x.b �� 6 ������

	p = (int*)&y;//����� &y.a �Ɠ���
	*p = 5;//y.a �� 5 ������
	++p;
	*p = 6;//y.b �� 6 ������


}
