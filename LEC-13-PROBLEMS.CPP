// Add digits of a number//
/*****************/

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

// Reverse the number//
/*****************/

#include <iostream>
using namespace std;

int main()
{
int n;
cout << "Please enter the number:";
cin >> n;

int r;
int sum = 0;
while (n > 0)
{
    r = n % 10;
    n = n / 10;
    sum = sum*10 + (r);
}
cout<<sum;

    return 0;
}

// Does a number come in powers of 2//
/*****************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the number:";
    cin >> n;
    int i = 2;
    long long result = 1;
    while (i > 1)
    {
        result = result * 2;
        if (result == n)
        {
            cout << "Yes the number exists in the power of 2!";
            break;
        }
        else if (result > n)
        {
            cout << "No";
            break;
        }
    }

        return 0;
    }

    // Find the square root of a number//
    /*************/

#include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cout << "Please enter the number:";
        cin >> n;
        for (int i = 0; i > -5; i++)
        {
            int square = i * i;
            if (square > n)
            {
                cout << (i - 1);
                break;
            }
        }

        return 0;
    }

    // Is the number Pallindrome?//
    /**************/

#include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cout << "Please enter the number:";
        cin >> n;
        int b = n;

        int r;
        int sum = 0;
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
            sum = sum * 10 + (r);
        }
        if (sum == b)
        {
            cout << "Yes the number is a Pallindrome";
        }
        else
        {
            cout << "No";
        }

        return 0;
    }
