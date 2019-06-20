 #include<bits/stdc++.h>
 using namespace std;
 typedef struct {
     int t;
     int l;
 }store;

int myfun(store a, store b){
    return a.t<b.t;
}
 int main(){
    int n,l,a;
    store s[n];
    cin>>n>>l>>a;
    for(int i=0;i<n;i++){
        int t,l;
        cin>>t>>l;
        s[i].l=l;
        s[i].t=t;
    }
    if(n==0){
        cout<<l/a;
        return 0;
    }

    sort(s,s+n,myfun);
    int ans=0;
    int temp=0;
    for(int i=1;i<n;i++){
        temp=(s[i].t-(s[i-1].t+s[i-1].l))/a;
        ans+=temp;
    }
    ans+=(l-(s[n-1].t+s[n-1].l))/a;
    ans+=(s[0].t/a);
    cout<<ans;

    return 0;

 }
 