#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl; 

    for(int i = 0 ; i < 2*n-1 ; i++){
        for(int j = 0 ; j < 2*n-1 ; j++){
            int t = i ; 
            int d = j ;
            int r = 2*n-2-i ;
            int l = 2*n-2-j ;
            cout<<n-min(min(t,d),min(r,l))<<" ";
        }
        cout<<endl;
    }
    cout<<"Pattern completed"<<endl;
}