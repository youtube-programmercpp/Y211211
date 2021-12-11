template<class T>struct test {
	T a;
	T b;
	T add() const
	{
		return a + b;
	}
};
#include <string>
int main()
{
	test<std::string> x;
	x.a = "ABC";
	x.b = "DEF";
	const auto y = x.add();
}
