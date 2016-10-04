#include<bits/stdc++.h>
using namespace std;
vector<int>rate,weight;
int temp;
int main()
{
    cin.sync_with_stdio(0);
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>temp;
        rate.push_back();
    }
    for(int i=0;i<M;i++){
        cin>>temp;
        weight.push_back(temp);
    }
    int cur[N];
    for(int i=0;i<N;i++)cur[i]=-1;
    for(int i=0;i<2*M;i++){
        cin>>temp;
        if(temp>0){
            int parkAt=-1;
            for(int j=0;j<N;j++)
                if(cur[j])==-1{
                    parkAt=j;
                    break;
                }
            
        }
    }   
}