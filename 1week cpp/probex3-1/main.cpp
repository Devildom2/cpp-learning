#include <iostream>
#include <string>
 
using namespace std;
 
//  整数値を比較し、大きいほうを返す関数
//int max(int,int);
//  実数を比較し、大きいほうを返す関数
//double max(double,double);
//  文字列を比較し、長いほうを返す関数 /// これは嘘、文字コードの順番になる
//string max(string,string);
//template<typename T> T max(T, T);

template<typename T> T max1(T a, T b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    cout << max1(1,2) << endl;
    cout << max1(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << max1(s1,s2) << endl;
    return 0;
}

/*
int max(int a,int b)
{
    if(a > b){
        return a;
    }
    return b;
}
double max(double a,double b)
{
    if(a > b){
        return a;
    }
    return b;
}
string max(string a,string b)
{
    if(a > b){
        return a;
    }
    return b;
}
*/