#include <iostream>

using namespace std;

int main()
{
    int arraySize;

    cout << "Enter Dynamic array size: " << endl;
    cin >> arraySize;

    int *ptr = new int [arraySize];

    for(int i = 0; i < arraySize; i++)
    {
        cin >> ptr[i];
    }

    cout << "Printing Array: " << endl;
    for(int i = 0; i < arraySize; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr;





    return 0;
}
