#include<iostream>
#include<string>
using namespace std;

class MyAdd{
public:
    int operator()(int v1,int v2){
        return v1+v2;
    }
};

void test01(){
    MyAdd myAdd;
    cout <<myAdd(10,10) <<endl;
}

class MyPrint{
    public:
        MyPrint(){
            count = 0;
        }
        void operator()(string test){
            cout <<test <<endl;
            count++;
        }
        int count;
};
void test02(){
    MyPrint myPrint;
    myPrint("hello");
    myPrint("hello");
    myPrint("hello");
    cout << "被调用次数" << myPrint.count <<endl;

}

void doPrint(MyPrint &mp,string test){
    mp(test);
}

void test03(){
    MyPrint myPrint;
    doPrint(myPrint,"hello C++");
}
int main(){
    test03();
    int a =10;
    int b = a;
    return 0;
}