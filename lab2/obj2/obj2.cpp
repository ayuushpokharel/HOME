#include<iostream>
using namespace std;
inline float tometer(float a){
    return(a*10);
}
int main(){
    cout<<tometer(1.5f);
    return 0;
}