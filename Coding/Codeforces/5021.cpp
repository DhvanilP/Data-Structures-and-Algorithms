#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=INT_MIN;
    int count=1;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum0=a+b+c+d;
    for(int i=1;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum>sum0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}