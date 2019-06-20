#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    
    sort(a,a+3);
    int one=abs(a[1]-a[0]);
    int two=abs(a[2]-a[1]);
    int ans=0;
    if(one <d)
    ans+=d-one;    

    if(two<d){
        ans+=d-two;
    }

    cout<<ans<<endl;
    return 0;
}