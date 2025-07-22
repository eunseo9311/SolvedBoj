#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    int prize = 0;

    if (n == m && m == k)
    {
        prize = 10000 + n * 1000;
    }
    else if (n == m || n == k || m == k)
    {
        int same_num = 0;
        if (n == m)
            same_num = n;
        else if (n == k)
            same_num = n;
        else
            same_num = m;

        prize = 1000 + same_num * 100;
    }
    else
    {
        prize = max(n, max(m, k)) * 100;
    }

    cout << prize;
    return 0;
}