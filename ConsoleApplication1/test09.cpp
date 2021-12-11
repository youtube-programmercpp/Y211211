extern "C" void f(void (*p)(void));
#include <iostream>
void g()
{
	std::cout << '*';
}
int main()
{
	f(g);
	std::cout << '\n';
	f([]() {std::cout << '/'; });
}
