#include<iostream>
using namespace std;
float tominute(float h,float m,float s){
    return(h*60+m+s/60);
}
float tominute(float m, float s){
    return(m+s/60);
}
float tominute(float h){
    return(h*60);
}
int main(){
    cout<<"\n"<<tominute(10,45,36);
    cout<<"\n"<<tominute(45,23);
    cout<<"\n"<<tominute(3);
    return 0;
}
