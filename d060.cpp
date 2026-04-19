#include <iostream>
using namespace std;
int main(){
    //
    int a,s;
    cin >> a;
    if (a < 25){
        s = 25-a;
    }else{
        s = (60 -a + 25)%60;
    }
    cout << s;
}
