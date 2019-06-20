#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int j=0;
        int flag=1;
        for(int i=0;i<b.size();i++){
            if(j==a.size()){
                if(a[j-1]!=b[i]){
                    flag=0;
                    break;
                } else{
                    continue;
                }
            }
            if(a[j]==b[i]){
                j++;
                continue;
            }
            if(a[j-1]==b[i])
                continue;
            flag=0;

        }
        if(a.size()>b.size()) {
            flag=0;
        }       
        if(a[0]!=b[0]){
            flag=0;
        }
        if(a[a.size()-1]!=b[b.size()-1]){
            flag=0;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }

    }

}