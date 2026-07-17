#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl;
    for(int i = 0 ; i <= n ; i++){
        char c = 'A';
        for(int j = 0 ; j < n-i ; j++){
            cout<<c;
            c++;
        }
        cout<<endl ;
    }

    cout<<"Pattern completed"<<endl;
}