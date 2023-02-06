#include<iostream>
using namespace std;
int main()
{
    int teams[100],judges,i,count=0,num=99,qualify=0;
    float votes;
    cin>>judges;
    for(i=0;i<judges;i++)
    {
        cin>>teams[i];
    }
    for(i=0;i<judges;i++)
    {
        for(int j=0;j<judges;j++)
        {
            if(teams[i]==teams[j])
            {
                count++;
            }
        }
        votes=count/judges;
        if(votes>0.25)
            qualify++;
    }
    cout<<qualify;
}

