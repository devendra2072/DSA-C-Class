// // 9/12/2024
// // insertion sort:- this is called online algoritham
// #include <iostream>
// using namespace std;
// void insert(int arr[], int l)
// {
//     for (int i = 1; i < l; i++)
//     {
//         int mn = i;
//         while (mn > 0 && arr[mn] < arr[mn - 1])
//         {
//             int tmp;
//             tmp = arr[mn];
//             arr[mn] = arr[mn - 1];
//             arr[mn - 1] = tmp;
//             mn--; // move to the previous element to compare with it.
//         }
//     }
//     for (int i = 0; i < l; i++)
//     {
//         cout << arr[i] << "\t";
//     }
// }
// int main()
// {
//     int arr[] = {8, 2, 1, 5, 4};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << "\n after applying\n ";
//     insert(arr, len);
// }

// optimization code
// output:- 8       7       9       8       0       5       1       9
//  after appling insertion sort
// 0       1       5       7       8       8       9       9
// c=1
//  counter=15
#include <iostream>
using namespace std;
int t = 0;
void insrt(int arr[], int s)
{
    bool c = false;
    for (int i = 0; i < s; i++)
    {
        int mn = i;
        while (mn > 0 && arr[mn] < arr[mn - 1])
        {
            int temp;
            temp = arr[mn];
            arr[mn] = arr[mn - 1];
            arr[mn - 1] = temp;
            mn--;
            c = true;
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
    int arr[] = {8, 7, 9, 8, 0, 5, 1, 9};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n after appling insertion sort\n";
    insrt(arr, s);
    cout << "\n counter=" << t << "\t";
}