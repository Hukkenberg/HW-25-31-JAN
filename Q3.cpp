#include <iostream> 

using namespace std;

int main() 
{
    int n, i, j, k, l;
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n - i; j++)
            cout << ' ';
        for (j = 1; j <= i; j++)
            cout << '*';
        if (i > 1)
        {
            for (k = 1; k <= i - 1; k++)
                cout << '*';
        }
        printf("\n");
    }
    return 0;
}