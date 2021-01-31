#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool b = true;
	if (n == 2)
		b = false;
	for (int i = 1; i < n / 2; i++)
	{
		if (n % i == 0)
			b = false;
	}
	if (b == false)
		cout << "no";
	else
		cout << "yes";
	return 0;
}