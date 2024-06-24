#include<iostream>
using namespace std;
int main(){
    int i,*pv;
    pv= new int[3];
    for(i=0;i<3;i++){
        cout<<"Enter a number:";
        cin>>pv[i];
    }
    cout<<"\nEntered numbers are:";
    for(i=0;i<3;i++){
        cout<<pv[i]<<"\t";
    }
    delete[]pv;
    return 0;
}