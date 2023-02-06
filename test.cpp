#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1,list2,list;
    for(int i=0;i<10;i++){
        cin>>i;
        list1.push_back(i);
    }
    for(int i=0;i<10;i++){
        cin>>i;
        list2.push_back(i);
    }
    // list=list1+list2;
    cout<<list1.size();
}