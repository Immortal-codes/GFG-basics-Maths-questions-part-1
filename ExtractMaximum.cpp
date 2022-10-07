#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    string S = "100klh564abc365bg";
    string k = "";
    int x = 0;
    int a = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] >= '0' && S[i] <= '9')
        {
            x = (x * 10) + (S[i] - '0');
            a = 1;
        }
        else
        {
            maxi = max(maxi, x);
            x = 0;
        }
    }
    maxi = max(maxi, x);
    if (a == 0)
    {
        return -1;
    }
    return maxi;

    
}