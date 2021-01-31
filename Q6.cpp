#include <iostream>

using namespace std;

int main()
{
	int n, i, j, k;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int diff = i - 1;
		for (j = i; j <= n; j++)
			cout << j << ' ';
		for (k = 1; k <= diff; k++)
			cout << k << ' ';
		cout << endl;
	}
	return 0;
}