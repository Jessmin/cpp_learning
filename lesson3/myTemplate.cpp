#include<iostream>
using namespace std;
template <typename T>
void mySwap(T& a,T& b){
    T temp =a ;
    a = b;
    b = temp ;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a= 10;
    int b =20;
    mySwap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}