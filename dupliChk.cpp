#include <iostream>
using namespace std;

int main()
{
    // take size of array
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    // take elements of array
    int arr[size];
    cout << "Enter elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    // show elements of array
    //  for(int i = 0 ; i<size; i++) {
    //      cout<<arr[i]<<" ";
    //  }
    //cout << endl;

    //show Dubplicate elements
    cout << "Duplicate Elments : ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}