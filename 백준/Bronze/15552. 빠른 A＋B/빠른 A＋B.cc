#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // int 는 21억까지이다 (4바이트, 32비트)
    // long 은 4바이트나 8바이트인데 보통 8이긴함
    int a, b, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = a + b;
        cout << sum << '\n'; // 여기 '\n' 하는거 까먹지말자 지금 줄바뀌잖아
    }

    return 0;
}