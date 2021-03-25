#include<iostream>
using namespace std;

void showValue(const int& v){
    cout << v<< endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    const int &ref =10;
    cout << ref <<endl;

    int a= 10;
    showValue(a);
    // system("pause");
    return 0;
}
