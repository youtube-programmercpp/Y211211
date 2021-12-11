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

	int* p = (int*)&x;//‚±‚ê‚Í &x.a ‚Æ“¯‚¶
	*p = 5;//x.a ‚É 5 ‚ª“ü‚é
	++p;
	*p = 6;//x.b ‚É 6 ‚ª“ü‚é

	p = (int*)&y;//‚±‚ê‚Í &y.a ‚Æ“¯‚¶
	*p = 5;//y.a ‚É 5 ‚ª“ü‚é
	++p;
	*p = 6;//y.b ‚É 6 ‚ª“ü‚é


}
