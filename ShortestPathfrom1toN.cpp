#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n=9;
    
   int cnt = 0;
        while(n!=1){
            if(n%3==0)
                n/=3;
            else
                n--;
            cnt++;
        }
    cout<<cnt;
    

}