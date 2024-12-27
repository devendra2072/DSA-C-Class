// bubble sort
// according to worst case we put up uper-bound
// and ye constent ko negligiable bhi karta hai
// not count space complexity  only count time complexicity
//  wap to print the sum of array
// #include<iostream>
// using namespace std;
// int sum(int arr[], int t)
// {
//     int s=0;
//     for (int i=0; i<t;i++)
//     {
//         s=s+arr[i];
//     }
//     return s;
// } 
// int main() 
// {
//     int arr[] = {1,2,1,1,1};
//     int s= sizeof(arr)/sizeof(arr[0]);
//     cout<<sum(arr,s);
// } 

// bubble sort ka emplementation

// output :- 5        1       2       3       4
//  after applying
// 1       2       3       4       5
// c=10]   time complexcity hai
// #include <iostream>
// using namespace std;
// void bubble(int arr[], int s)
// {
//     int c = 0;
//     for (int i = 0; i < s; i++)
//     {
//         for (int j = 0; j < s -i - 1; j++)
//         {
//             int tmp;
//             if (arr[j] > arr[j + 1])
//             {
//                 tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//             }
//             c++;
//         }
//     }
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << "\n"<< "c=" << c;
// }
// int main()
// {
//     int arr[] = {-5,1,3,4,2};
//     int s = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\t ";
//     }
//     cout << "\n after applying \n";
//     bubble(arr, s);
// }

// bubble sort ka optimization code

// time coplexcity O(n2) oder of n squre 
// output 4       3       2       1
//  after applying bubble sort
// 1       2       3       4
// c=1
//  counter=6

#include <iostream>
using namespace std;
int t = 0;
void bubble(int arr[], int s)
{
    bool c = false;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                c = true;
            }
            if (c == false)
            {
                break;
            }
            t++;
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n"
         << "c=" << c;
}
int main()
{
    int arr[] = {4,3,2,1};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n after applying bubble sort \n";
    bubble(arr, s);
    cout << "\n counter=" << t << "\t";
}