// 9/12/2024
// insertion sort:- this is called online algoritham
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
#include <iostream>
using namespace std;
void insert(int arr[], int l)
{
    bool c = false;
    for (int i = 1; i < l; i++)
    {
        int mn = i;
        while (mn > 0 && arr[mn] < arr[mn - 1])
        {
            int tmp;
            tmp = arr[mn];
            arr[mn] = arr[mn - 1];
            arr[mn - 1] = tmp;
            c = true;
            mn--; // move to the previous element to compare with it.
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[] = {8,2,3,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n after applying\n ";
    insert(arr, len);
}