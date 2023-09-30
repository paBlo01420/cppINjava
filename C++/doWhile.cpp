#include <iostream>

using namespace std;

int main()
{
    int min = 3;
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << i << " " << j << endl;
            j++;
        } while (j <= min);
        i++;
    } while (i <= min);

    return 0;
}
