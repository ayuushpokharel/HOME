#include<iostream>
using namespace std;
float tometers(float k){
    return(k*1000);
}
float tometers(float k, float m){
    return(k*1000+m);
}
float tometers(float k,float m,float c){
    return(k*1000+m+c/100);
}
int main(){
    cout<<"\n"<<tometers(6);
    cout<<"\n"<<tometers(8,100);
    cout<<"\n"<<tometers(1,20,60);
    return 0;
}
