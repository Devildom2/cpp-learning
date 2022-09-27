#include <iostream>
 
using namespace std;
 
int main(){
    int a = 7;
    //int &n = a;
    int n = a;
    n += 3;

    cout << "a= " << a << endl;
    cout << "a= " << n << endl;

}