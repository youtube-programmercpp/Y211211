#define	_CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
std::string f(int n)
{
	char s[256];
	sprintf(s, "%d", n);
	return s;
}
int main()
{
	const auto s1 = f(100);
	const auto s2 = std::to_string(200);
}
