// Armstrong number//
/***************/
// #include <iostream>
// using namespace std;

// int countdigits(int num)
// {
//     int counter = 0;
//     while (num > 0)
//     {
//         counter = counter + 1;
//         num = num / 10;
//     }
//     return counter;
// }

// int power(int rem, int digits)
// {
//     int ans = 1;
//     for (int i = 1; i <= digits; i++)
//     {
//         ans = ans*rem;
//     }
//     int powerraised=ans;
//     return powerraised;
// }

// int armstrong(int num, int digits)
// {
//     int rem;
//     int sum = 0;
//     int final = num;
//     while (num > 0)
//     {
//         rem = num % 10;
//         power(rem,digits);
//         int powerraised=power(rem,digits);
//         sum= sum + powerraised;
//         num = num / 10;
//     }
//     if (sum==final)
//     {
//         cout<<"Yes the number is armstrong number.";
//     }
//     else
//     {
//         cout<<"NO.";
//     }

// }

// int main()
// {
//     int num;
//     cout << "Please enter you number:";
//     cin >> num;
//     countdigits(num);
//     int digits = countdigits(num);
//     armstrong(num,digits);
//     return 0;
// }

// Find number of trailing zeroes in factorial of a number//
/****************/

#include <iostream>
using namespace std;

long long calcfactorial(int num)
{
    long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void calczero(long long factorial)
{
    int counter = 0;
    while (factorial % 10 == 0)
    {
        counter = counter + 1;
        factorial = factorial / 10;
    }
    cout << counter;
}

int main()
{
    int num;
    cout << "Please enter your number:";
    cin >> num;
    long long factorial = calcfactorial(num);
    cout << factorial<<endl;
    calczero(factorial);

    return 0;
}