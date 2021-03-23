#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    // int a[2][3] = {
    //     {1,2,3},{4,5,6}
    // };
    // cout <<"size of a:"<<  sizeof(a) <<endl;
    // cout << "地址:"<<a <<endl;
    // cout << "地址:"<<a[0] <<endl;
    // cout << "地址:"<<a[1] <<endl;
    // cout << "value:"<<&a[1][1] <<endl;
    // cout << "value:"<<a[1][1] <<endl;

    // int a = 10;
    // int  * p;
    // p = &a;
    // cout << &a <<endl;
    // cout <<p <<endl;
    // cout << *p <<endl;
    // cout << sizeof(p) <<endl;

    int arr[] ={1,2,3,4,5};
    int *p = arr;
    // cout <<arr[0]<<endl;
    // cout <<*p <<endl;

    for(int i =0;i <10;i++){
        cout <<*p <<endl;
        cout << p <<endl;
        p++;
    }
    return 0;
}
