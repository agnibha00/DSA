#include <iostream>
using namespace std;

int count(int n, int arr[], int num, int diff)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i] - num) <= diff)
        {
            count++;
        }
    }

    if (count==0){
        return -1;
    }
    return count;
}

int main()
{
    int n, num, diff;
    cout << "Enter the num value: ";
    cin >> num;
    cout << "Enter the diff value: ";
    cin >> diff;

    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the" << i << " value : ";
        cin >> arr[i];
    }

    int a = count(n, arr, num, diff);
    cout << a;
    return 0;
}