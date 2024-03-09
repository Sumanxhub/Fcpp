//adding diagonal elements of 2d array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int arr[size][size];
    int diagonal_arr1[size];
    int diagonal_arr2[size];
    // taking elemants of array
    cout << "Enter Elements : ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    // showing elements of array 2-D
    cout << "Your 2-d Araay : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl
             << endl;
    }
    // selecting elements of 1st diagonal (00 , 11)
    for (int a = 0; a < size; a++)
    {
        for (int b = 0; b < size; b++)
        {
            if (a == b)
            {
                diagonal_arr1[a] = arr[a][b];
            }
        }
    }
    // selecting elements of 2nd diagonal (01 , 10)
    for (int a = 0; a < size; a++)
    {
        for (int b = 0; b < size; b++)
        {
            if (a + b == size - 1)
            {
                diagonal_arr2[a] = arr[a][b];
            }
        }
    }
    // showing elements of 1st diagonal
    cout << "Elements of 1st diagonal : ";
    for (int i = 0; i < size; i++)
    {
        cout << diagonal_arr1[i] << " ";
    }
    cout << endl;
    // showing elements of 2nd diagonal
    cout << "Elements of 2st diagonal : ";
    for (int i = 0; i < size; i++)
    {
        cout << diagonal_arr2[i] << " ";
    }
    cout << endl;

    int diagonalsum1 = 0;
    int diagonalsum2 = 0;
    // adding elements of 1st diagonal
    for (int i = 0; i < size; i++)
    {
        diagonalsum1 += diagonal_arr1[i];
    }
    // adding elements of 2nd diagonal
    for (int i = 0; i < size; i++)
    {
        diagonalsum2 += diagonal_arr2[i];
    }

    cout << "sum of 1st diagonal Elements : " << diagonalsum1 << endl;
    cout << "sum of 2st diagonal Elements : " << diagonalsum2 << endl;
    return 0;
}