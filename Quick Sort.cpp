#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while(i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + start] = temp[idx];
    }
    
    
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid); // Left half
        mergeSort(arr, mid + 1, end); // Right half
        merge(arr, start, mid, end);
    }
        
}
void show(const vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int choice;
    cout << "Enter how many values you want to enter: ";
    cin >> choice;
    vector<int> arr(choice);
    for (int i = 0; i < choice; i++)
    {
        cout << "Enter #" << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Before: ";
    show(arr);
    mergeSort(arr, 0, arr.size() - 1);
    cout << endl;
    cout << "After: ";
    show(arr);
}