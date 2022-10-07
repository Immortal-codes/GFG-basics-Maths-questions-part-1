#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int hcf(int A, int B){
        if(B==0)
            return A;
        return hcf(B,A%B);
    }

int main()
{
        int N=3;
       int arr[] = {2, 4, 6};



      int x=0;
    	for(int i=0;i<N;i++){
    	    x=hcf(x,arr[i]);
    	}



}