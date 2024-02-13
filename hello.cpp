#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {  
        if (i == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << endl;
                ;
            }
        }
        else
        {
            int k[i + 1];
            for (int j = 1; j <= i + 1; j++)
            {
                if ((j == 1) || (j == 2))
                {
                    k[j] = 1;
                    cout << k[j];
                }
                else
                {
                    k[j] = k[j - 1] + k[j - 2];
                    cout << k[j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}

