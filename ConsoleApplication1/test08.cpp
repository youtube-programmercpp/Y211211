#include <iostream>
template<class T>int f(const T& fn)
{
	std::cin >> a;

	return 10 * fn(a);
}
int main()
{
	std::string prompt = "データを入力してください。";
	const auto n = f([&prompt](int a)
		{
			std::cout << prompt << ": ";
			int n;
			std::cin >> n;
			return n + a;
		});
}
