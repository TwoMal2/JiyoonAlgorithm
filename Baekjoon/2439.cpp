#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int j=0;j<N;j++){
            if((N-j)<=i)
                cout<<"*";
            else    
                cout<<" ";
        }
        cout<<"\n";
    }



    return 0;
}