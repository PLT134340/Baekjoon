#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int result = 1;
    for(int i = n; i > n - k; i--)
        result *= i;
    for(int i = k; i > 1; i--)
        result /= i;
    cout << result << endl;
    return 0;
}