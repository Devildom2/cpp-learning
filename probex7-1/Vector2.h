#ifndef _VECTOR2_H_
#define _VECTOR2_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class Vector2{
public:
    double x;
    double y;
public:
    //  =演算子のオーバーロード
    Vector2& operator=(const Vector2& v);
    //  +=演算子のオーバーロード
    Vector2& operator+=(const Vector2& v);
    //  -=演算子のオーバーロード
    Vector2& operator-=(const Vector2& v);

    Vector2 operator+(const Vector2& v);
//    Vector2 operator-(const Vector2& v);

    Vector2 operator*(const double d);
};
 
//  +演算子のオーバーロード
//Vector2 operator+(const Vector2&, const Vector2&);
//  -演算子のオーバーロード
Vector2 operator-(const Vector2&, const Vector2&);
//  *演算子のオーバーロード
//Vector2 operator*(const double,const Vector2& v);
 
#endif // _VECTOR2_H_