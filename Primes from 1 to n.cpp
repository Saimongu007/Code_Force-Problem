#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        int count = 0;
        for (int j = 2; j* j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
