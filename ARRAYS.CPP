// #include<iostream>
// using namespace std;

// int main()
// {
//     cout<<"Please enter the number of elements you want to have:";
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<"Enter the element:";
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {

//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }

// Find the number in array and its index//
/********************/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int arr[] = {12, 7, 25, 9, 18, 4, 31, 6};
//     bool found = false;

//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] == n)
//         {
//             cout << "Yes, the number exists in array\n";
//             cout << "Its index is: " << i;
//             found = true;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout << "No, the number does not exist in the array";
//     }

//     return 0;
// }

// Reverse array//
/*************/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int rev[5];
    int i = 4;
    int j = 0;
    while (i >= 0)
    {
        rev[j] = arr[i];
        i--;
        j++;
    }
    for (int d = 0; d < 5; d++)
    {
        arr[d]=rev[d];
    }
    

    for (int c = 0; c < 5; c++)
    {
        cout << arr[c] << endl;
    }

    return 0;
}
