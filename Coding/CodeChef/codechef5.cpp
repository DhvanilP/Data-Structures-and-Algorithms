// https: //www.codechef.com/problems/CSUB
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        cout<<(count)*1LL*(count+1)/2<<endl;
    }
    return 0;
}