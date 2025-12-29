// Add digits of a number//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter your number:";
    cin >> n;

    int ans = 0;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        ans = ans + r;
    }
    cout << ans;

    return 0;
}
