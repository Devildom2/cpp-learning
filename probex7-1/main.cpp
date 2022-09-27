#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
 
using namespace std;
 
void vec(string, Vector2&);
void vec(string, Vector3&);
 
int main(){
    Vector3 v1,v2,v1v2,v3;

    v1.x = 1.0;
    v1.y = 2.0;
    v1.z = 3.0;

    v2.x = 100.0;
    v2.y = 100.0;
    v2.z = 100.0;

    v2 = v1;    //  =演算子のオーバーロード

    vec("v1=", v1);
    vec("v2=", v2);

    v1v2 = v1 + v2;    //  +演算子のオーバーロード

    vec("v1 + v2=", v1v2);

    v3 = v1 * 4.0;      //  ベクトルのスカラー倍

    vec("v1 * 4.0", v3);

    v3 += v1;           //  代入演算子（+=）
    vec("v3 += v1",v3);

    v1 -= v2;           //  代入演算子（-=）
    vec("v1 -= v2", v1);

    v1 = v3 - v2;       //  -演算子のオーバーロード
    vec("v3 - v2", v1);

/*
v1=(1,2,3)
v2=(1,2,3)
v1 + v2=(2,4,6)
v3=(4,8,12)
v1=(5,10,15)
v2=(0,0,0)
*/

/*    
    Vector2 v1,v2;
    //  ベクトルに値を代入
    v1.x = 10.0;
    cout << endl;

    v1.y = 20.0;
    cout << endl;

    vec("v1=", v1);
    vec("v2=", v2);

    v2 = v1;            //  値を代入

    vec("v2=", v2);

    v2.x = 1.0;
    v2.y = 2.0;

    vec("v2=", v2);

    Vector2 v1_plus_v2 = v1 + v2;
    vec("v1_plus_v2=", v1_plus_v2);

    Vector2 v1_minus_v2 = v1 - v2;
    vec("v1_minus_v2=", v1_minus_v2);

    Vector2 v1_bond_x = v1 * 3.0;
    vec("v1_bond_x", v1_bond_x);

    Vector2 x_bond_v1 = 3.0 * v1;
    vec("x_bond_v1", x_bond_v1);   

    cout << "v3 = 4.0 * v1" << endl;
    v3 = 4.0 * v1;      //  ベクトルのスカラー倍

    cout << "vec('v1=', v1)" << endl;
    vec("v1=", v1);
    cout << endl;

    cout << "vec('v2=', v2)" << endl;
    vec("v2=", v2);
    cout << endl;

    cout << "auto vx = v1 + v2" << endl;
    auto vx = v1 + v2;
    cout << endl;

    cout << "vec('v1 + v2=', vx)" << endl;
    vec("v1 + v2=", vx);
    cout << endl;

    cout << "vec('v3=', v3)" << endl;
    vec("v3=", v3);
    cout << endl;

    cout << "v3 += v1" << endl;
    v3 += v1;           //  代入演算子（+=）
    cout << endl;

    cout << "vec('v3=',v3)" << endl;
    vec("v3=",v3);
    cout << endl;

    cout << "v1 -= v2" << endl;
    v1 -= v2;           //  代入演算子（-=）
    cout << endl;

    cout << "vec('v1=', v1)" << endl;
    vec("v1=", v1);
    cout << endl;
*/  
    return 0;
}
 
void vec(string vecname,Vector2& v)
{
    cout << vecname << "(" << v.x << "," << v.y << ")" << endl;
}

void vec(string vecname,Vector3& v)
{
    cout << vecname << "(" << v.x << "," << v.y << "," << v.z << ")" << endl;
}

