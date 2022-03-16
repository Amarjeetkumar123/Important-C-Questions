// Factorial of biggest number like (100!)...

#include<iostream>
using namespace std;
void multiply(int *A , int x , int &idx){
    int carry = 0;
    for (int  i = 0; i <= idx; i++)
    {
        int cur = A[i]*x+carry;
        A[i] = cur%10;
        carry = cur/10;

    }
    while(carry>0){
        idx++;
        A[idx] = carry%10;
        carry/=10;
    }
    
}

int main(){

    int A[2000] = {0};
    A[0]=1;
    int n;
    cin>>n;
    int idx = 0;
    for (int  i = 1; i <= n; i++)
    {
        multiply(A,i,idx);    
    }


	// cout<<idx<<endl;
    
    for (int  i = idx; i >= 0; i--)
    {
        cout<<A[i];
    }
    

    return 0;
}