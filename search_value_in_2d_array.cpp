#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++){
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }

    int key;
    cin>>key;
    bool flag=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(a[i][j]==key){
                cout<<a[i][j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }

      if(!flag){
          cout<<"Not Present";
      }

    return 0;
    
}