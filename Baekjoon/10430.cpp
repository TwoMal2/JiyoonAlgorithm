#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout<<(a+b)%c<<endl;
    cout<<((a%c)+(b%c))%c<<endl;
    cout<<(a*b)%c<<endl;
    cout<<((a%c)*(b%c))%c;


    return 0;
}