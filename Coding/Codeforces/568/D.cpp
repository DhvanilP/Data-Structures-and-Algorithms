#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    vector<long long int>a;
    long long int temp;
    for(long long int i=0;i<x;i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    if(a.size()<=3){
        cout<<a[0];
    }
    else{
        long long int temp=0;
        for(long long int i=1;i<x;i++){
            temp+=a[i]-a[i-1];
        }
        long long int d=temp/(x-1);
        // cout<<temp<<" "<<d<<endl;
        int ans=0;
        for(long long int i=1;i<x;i++){
            if(a[i]-a[i-1]==d){
                continue;
            }
            else{
                ans=i;
                break;
            }
        }
        if(ans==1){
            if(a[ans+1]-a[ans]==d){
                ans=0;
            }
        }
        cout<<ans<<endl;
    }
}
