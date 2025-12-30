#include <iostream>
using namespace std;

int primeornot()
{
    cout << "Please enter your number: ";
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1)
        isPrime = false;

    for (int i = 2; i < n && isPrime; i++)
    {
        if (n % i == 0)
            isPrime = false;
    }

    if (isPrime)
        cout << "The number is prime!" << endl;
    else
        cout << "The number is not prime!" << endl;

    return n;
}

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int x =primeornot();
    int y=factorial(x);
    cout<<y;
    return 0;
}