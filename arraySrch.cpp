#include<iostream>
using namespace std;

int main() {
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

    int search , found , index;

    cout<<"Enter the element you want to search : ";
    cin>>search;

    for (int i = 0; i < size; i++ )
    {
        if( search == arr[i]){
            found=1;
            index=i;
        }
    }
    if (found==1){
        cout<<search<<" is found at index "<<index;
    } else { 
        cout<<search<<" is not found in the array ";
    }
    cout<<endl;

    return 0;
}