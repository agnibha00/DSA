/*
You are given a function,
int findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

Example:
Input:

arr: 12 3 14 56 77 13
num: 13
diff: 2
Output:
3

Explanation:
Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.

*/

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