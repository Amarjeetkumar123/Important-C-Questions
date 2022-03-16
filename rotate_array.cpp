#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    // int nums[]={1,2,3,4,5,6,7};
    // int n = sizeof(nums)/sizeof(int);
    // int k=3;

    int k;
    cin>>k;
    k = k%n;        // reduce extra itrations..
    for(int i=0;i<n/2;i++){
        swap(nums[i],nums[n-1-i]);          // first Reverse array..
    }
     
    for (int i = 0; i < k/2; i++)
    {
        swap(nums[i],nums[k-1-i]);          //reverse the first k numbers
    }
    for (int i = 0; i < (n-k)/2; i++)
    {
        swap(nums[k+i],nums[n-1-i]);        //reverse the last (n-k) numbers
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    

}