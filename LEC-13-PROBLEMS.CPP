// Add digits of a number//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter your number:";
    cin >> n;
    if (n >= 10)
    {
        while (n > 9)
        {
            int ans = 0;

            while (n > 0)
            {
                int r = n % 10;
                n = n / 10;
                ans = ans + r;
            }
            if (ans < 10)
            {
                cout << ans;
            }

            n = ans;
        }
    }
    else
    {
        cout << n;
    }

    return 0;
}
