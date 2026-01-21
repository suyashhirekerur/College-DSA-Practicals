#include <iostream>
using namespace std;

int main()
{
    int n, num_to_search;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> num_to_search;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num_to_search)
        {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
