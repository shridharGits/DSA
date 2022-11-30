#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 8;
    int spaceCount = 2;
    for (int i = 1; i <= row; i++)
    {
        if (i == row / 2 || i == row / 2 + 1)
        {
            for (int j = 0; j < row; j++)
            {
                cout << '*';
            }
        }
        else
        {
            if (i < row / 2)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                if (i < row / 2)
                {
                    for (int j = 1; j <= row - (i * 2); j++)
                    {
                        cout << " ";
                    }
                }
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
            }
            else{
                 for (int j = 1; j <= row%i+1; j++)
                {
                    cout << "*";
                }
                // for (int j = 1; j <= 2 * (i % (row/2 + 1)); j++)
                for (int j = 1; j <= 2 * (i%(row/2)-1); j++)
                {
                    cout << " ";
                }
                spaceCount+=2;
                for (int j = 1; j <= row%i+1; j++)
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }

    return 0;
}