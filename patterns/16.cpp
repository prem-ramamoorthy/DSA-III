#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl;

    char c = 'A' ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<c ;
        }
        cout<<endl ;
        c++;
    }

    cout<<"Pattern completed"<<endl;
}