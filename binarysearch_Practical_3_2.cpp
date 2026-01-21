#include <iostream>
using namespace std;

int main()
{
    int n, num_to_search;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements (in sorted order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> num_to_search;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == num_to_search)
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < num_to_search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found";
    return 0;
}
