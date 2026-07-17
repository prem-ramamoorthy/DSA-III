#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the No:" ;
    cin>>n ;
    cout<<endl;

    char s = '0' ;
    for(int i = 1 ; i <= n ; i++){
        s == '1' ? s= '0' : s= '1' ;
        char c= s ;
        for(int j = 0 ; j < i ; j++){
            cout<< c;
            c == '1' ? c = '0' : c = '1' ;
        }
        cout<<endl ;
    }

    cout<<"Pattern completed"<<endl;
}