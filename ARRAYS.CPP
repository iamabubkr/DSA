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

//Find the number in array and its index//
/********************/
#include<iostream>
using namespace std;

int main()
{
    int arr[]={12, 7, 25, 9, 18, 4, 31, 6};
    for (int i = 0; i < 8; i++)
    {
        if (arr[i]==18)
        {
            cout<<"Yes the number exists in array"<<endl<<"It's index is:"<<i;
        }
        else
        {
            cout<<-1;
        }
        
    }
    

    return 0;
}