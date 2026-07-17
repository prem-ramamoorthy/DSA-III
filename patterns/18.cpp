#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl; 

    for(int i = 1 ; i <= n ; i++){
        char c = 'A'+(n-i);
        for(int j = 1 ; j <= i ; j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    cout<<"Pattern completed"<<endl;
}