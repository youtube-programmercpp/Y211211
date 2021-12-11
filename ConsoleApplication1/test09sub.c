// p ‚ÍŠÖ”ƒ|ƒCƒ“ƒ^
void f(void (*p)(void))
{
	for (int i = 0; i < 10; ++i)
		(*p)();
}
