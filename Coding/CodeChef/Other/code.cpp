#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    for(int i=0;i<c;i++){
        cout<<"+";
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
        cout<<"+ ";
    }
    cout<<endl;


    //middle lines
    for(int k=0;k<n-2;k++){
        for(int i=0;i<c;i++){
            cout<<"+";
            for(int j=0;j<k;j++){
                cout<<" ";
            }
            cout<<"+";
            for(int j=0;j<n-2-k-1;j++){
                cout<<" ";
            }
            cout<<"+ ";
        }
        cout<<endl;

    }
    // last line same as 1st line

    for(int i=0;i<c;i++){
        cout<<"+";
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
        cout<<"+ ";
    }


    cout<<endl;
    return 0;
}