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

	int* p = (int*)&x;//これは &x.a と同じ
	*p = 5;//x.a に 5 が入る
	++p;
	*p = 6;//x.b に 6 が入る

	p = (int*)&y;//これは &y.a と同じ
	*p = 5;//y.a に 5 が入る
	++p;
	*p = 6;//y.b に 6 が入る


}
