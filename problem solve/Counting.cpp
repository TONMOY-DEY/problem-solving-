#include <iostream>
using namespace std;

void countingSort(int A[], int n)
{
    int max = A[0];

    // Find maximum element
    for(int i = 1; i < n; i++)
    {
        if(A[i] > max)
            max = A[i];
    }

    // Count array
    int count[max + 1] = {0};

    // Store frequency
    for(int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    // Build sorted array
    int index = 0;

    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            A[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int A[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;

    countingSort(A, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}