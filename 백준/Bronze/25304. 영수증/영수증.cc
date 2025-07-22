#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int money, sum, n, a, b;
    cin >> money >> n;
    sum = 0; // sum을 밖에서 초기화햇어야 한다 전역변수로 나중에 불러와야하니까

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b; // a, b는 반복문 내에서 입력을 받을거니까 여기서 cin
        sum += a * b;
    }
    if (sum == money) // 비교는 항상 == 이걸로 한다
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}