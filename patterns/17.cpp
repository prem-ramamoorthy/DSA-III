#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl; 


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<" " ;
        }
        char c = 'A' ;
        for(int j = 0 ; j < ((i+1)*2 - 1) ; j++){
            cout<<c;
            j<i ? c++ : c-- ;
        }
        for(int j = 0 ; j < n-i ; j++){
            cout<<" " ;
        }
        cout<<endl;
    }
    cout<<"Pattern completed"<<endl;
}