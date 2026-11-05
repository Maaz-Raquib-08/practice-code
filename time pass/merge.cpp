#include <iostream>
using namespace std;
void merge(int a[], int start, int mid, int end)
{
    int high = start, low = mid + 1, index = 0;
    int temp[end - start + 1];
    while (high <= mid && low <= end)
    {
        if (a[high] <= a[low])
        {
            temp[index] = a[high];
            index++;
            high++;
        }
        else
        {
            temp[index] = a[low];
            index++;
            low++;
        }
    }
    while (high <= mid)
    {
        temp[index] = a[high];
        index++;
        high++;
    }
    while (low <= end)
    {
        temp[index] = a[low];
        index++;
        low++;
    }
    index = 0;
    while (start <= end)
        a[start] = temp[index];
    start++;
    index++;
}
void mergesort(int a[], int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergesort(a, start, mid);
    mergesort(a, mid + 1, end);
    merge(a, start, mid, end);
}
int main()
{
    int n;
    cout << " enter the size of array" << endl;
    cin >> n;
    int a[n];
    cout << " enter the number the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    cout << "sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
