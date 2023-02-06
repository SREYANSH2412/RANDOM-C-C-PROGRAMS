#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        cin>>x;
        if(x<=n)
            cout<<x<<endl;
        else{
            while(x>n){
                x=x-n-1;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}