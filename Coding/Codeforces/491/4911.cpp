#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int ans=n-(a+b-c);
    if(ans<=0){
        cout<<"-1"<<endl;
        exit(0);
    }
    if(c>a||c>b){
        cout<<"-1"<<endl;
        exit(0);
    }
    cout<<ans;
    return 0;
}