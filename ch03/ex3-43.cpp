#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[3][4] =
    {
        { 0, 1, 2, 3 },
        { 4, 5, 6, 7 },
        { 8, 9, 10, 11}
    };

    for (const auto &row : arr)
        for (auto col : row)
            cout << col << " ";

    cout << endl;
    cout << "-------" << endl;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            cout << arr[i][j] << " ";

    cout << endl;
    cout << "-------" << endl;

    for (int (*row)[4] = arr; row != arr + 3; ++row)
        for (int *col = *row; col != *row + 4; ++col)
            cout << *col << " ";

    cout << endl;

    return 0;
}
