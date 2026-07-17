#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<j+1 ;
        }
        for(int k = 1 ; k <= ((n-i+1)*2-1) ; k++){
            cout<<" " ;
        }
        int c = i ;
        for(int j = 0 ; j < i ; j++){
            cout<<c-- ;
        }
        cout<<endl ;
    }

    cout<<"Pattern completed"<<endl;
}