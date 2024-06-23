#include<iostream>
using namespace std;
void show(int=1,float=2.3,long=4);
int main(){
    show();
    show(1);
    show(1,2,2);
    show(1,2.3,300);
    return 0;
}
void show(int a,float b,long c){
    cout<<"\na="<<a<<"\tb="<<b<<"\tc="<<c;
}