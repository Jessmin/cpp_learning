#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

void print(int val){
    cout<<val<<endl;
}
void printVector(vector<int> v){
    for_each(v.begin(),v.end(),print);
}
void test(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    //method1
    while(pBegin != pEnd){
        cout <<*pBegin<<endl;
        pBegin++;
    }
    //method2
    for(vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout<<*it<<endl;
    }
    cout << endl;
    //method3
}

void test2(){
    vector<int> v1;
    for (int i =0;i<5;i++){
        v1.push_back(i);
    }
    printVector(v1);
    cout << "-----"<<endl;
    vector<int> v2;
    v2 = v1;
    printVector(v2);
    cout << "-----"<<endl;

    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    printVector(v3);
    cout << "-----"<<endl;

    vector<int> v4;
    v4.assign(10,100);
    printVector(v4);
}
int main(int argc, char const *argv[])
{
    // test();
    test2();
    return 0;
}