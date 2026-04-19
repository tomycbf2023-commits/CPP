#include <iostream>
using namespace std;
int main(){
    //
    int a;
    cin >> a;
    cout <<"50元 x "<<a/50<<endl;
    a %= 50;
    cout <<"10元 x "<<a/10<<endl;
    a %=10;
    cout <<"5元 x "<<a/5<<endl;
    a %=5;
    cout <<"1元 x "<<a<<endl;

}
