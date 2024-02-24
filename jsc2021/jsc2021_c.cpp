#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int x = b; 1; x--)
    {
        if ((a + x - 1) / x < b / x)
        {
            cout << x << endl;
            return 0;
        }
    }
}
