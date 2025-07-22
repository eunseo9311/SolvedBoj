#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        sum = a + b;
        cout << "Case #" << i << ": " << sum << '\n';
    }

    return 0;
}