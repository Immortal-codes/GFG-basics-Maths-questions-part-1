#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int count = 0;
    int n = 12;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}