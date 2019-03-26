#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    int temp;
    while(n--){
        cin>>temp;
        a.push_back(temp);
        b.push_back(0);
    }
    int large=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>large)
            large=a[i];
    }
    cout<<large<<"\n";
    for(int i=0;i<a.size();i++){
        if(large%a[i]==0){
            large=large/a[i];
            cout<<a[i]<<"a";
        }
    }
    cout<<large<<"\n";

    int large1=0;
    for(int i=0;i<a.size();i++){
        if((a[i]>large1)&&(b[i]==0))
            large1=a[i];
    }
    cout<<large<<" "<<large<<"\n";
    return 0;
}