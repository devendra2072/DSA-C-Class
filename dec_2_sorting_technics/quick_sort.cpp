// 12/12/2024 quick sort
#include <iostream>
using namespace std;
int part(int arr[], int low, int high)
{
    int pv;
    pv = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] < pv)
        {
            i++;
        }
        while (arr[j] > pv)  // stop lesser than equal to pivot value
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    int temp;
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
} 
void QKSORT(int arr[], int low, int high)
{
    if (low < high)
    {
        int pv;
        pv = part(arr, low, high);
        QKSORT(arr, low, pv - 1);
        QKSORT(arr, pv + 1, high);
    }
}
void show(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\n";
    }
}
int main()
{
    int arr[]= {9,2,9,4,1};
    int s= sizeof(arr)/sizeof(arr[0]);
    show (arr,s);
    QKSORT(arr,0,s-1);
    cout<<"after applying quick sort arry";
    show(arr,s);
}
