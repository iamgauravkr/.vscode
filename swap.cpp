#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter a: "<<endl;
    cin>>a;
    cout<<"enter b: "<<endl;
    cin>>b;

c=a;
a=b;
b=c;

cout<<"after swaping a: "<<a<<endl<<"after swaping b:"<<b<<endl;
return 0;
}