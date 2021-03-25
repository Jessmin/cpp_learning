#include<Gun.h>
#include<iostream>
using namespace std;
void Gun::addBullet(int num){
    this->_bullet_count += num;
}

bool Gun::shot(){
    if(this->_bullet_count <=0){
        cout<<"no bullet!"<<endl;
        return false;
    }
    this->_bullet_count -=1;
    cout << "成功发射"<<endl;
    return true;
}