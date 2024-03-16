#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter row an column:" << endl;
    cin >> row >> col;

    int **ptr = new int *[row];

    for(int i = 0; i< row; i++)
    {
        ptr[i] = new int[col];
    }

    //input
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> ptr[i][j];
        }
    }

    //output
     for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete []ptr;

    return 0;



}

