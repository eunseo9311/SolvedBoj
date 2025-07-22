#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int long_count = n / 4;

    for (int i = 0; i < long_count; ++i)
    {
        cout << "long ";
    }
    cout << "int";
    return 0;
};