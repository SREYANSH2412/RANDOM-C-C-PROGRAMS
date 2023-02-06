#include<bits/stdc++.h>
using namespace std;
class sample{
    public: sample(int n){
        for (int i = 0; i < n; i++)
            cout<<"Default constructor called"<<endl;
    }
};
int main(){
    sample s1(3),s2(2);
}