//Question number 2
 
#include <iostream>
#include <string>
using namespace std;

int string_binary_search(string arr[], int n, string target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high)/2;

        if (arr[mid] == target)
        {
            return mid; 
            
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;  
        }
        else
        {
            high = mid - 1;  
        }
    }
    return -1;
}

int main()
{
    string city[] = {
        "Barisal",
        "Chittagong",
        "Dhaka",
        "Khulna",
        "Mymensingh",
        "Rajshahi",
        "Rangpur",
        "Sylhet"
    };
    int n = sizeof(city) / sizeof(city[0]);

    string target;

    cout << "Enter city name: ";
    cin >> target;

    int index = string_binary_search(city, n, target);

    if (index != -1)
    {
        cout << target << " found at index " << index << endl;
    }
    else
    {
        cout << target << " not found" << endl;
    }
}