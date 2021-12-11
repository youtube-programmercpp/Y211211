struct sample {
	int k;
	int operator()(int n) const
	{
		return k * n;
	}
};
int main()
{
	sample x;
	x.k = 3;
	const auto n = x(10);

	int k = 4;
	const auto y = [k](int n) {return k * n; };
	const auto m = y(20);
}
