#include "Vector2.h"

//  +演算子のオーバーロード
/*
Vector2 operator+(const Vector2 &v1, const Vector2 &v2)
{
    Vector2 v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;

    cout << "Vector2 operator+(const Vector2& v1,const Vector2& v2)" << endl;

    return v;
}
*/
Vector2 Vector2::operator+(const Vector2 &v)
{
    Vector2 vout;
    vout.x = x + v.x;
    vout.y = y + v.y;

    cout << "Vector2 Vector2::operator+(const Vector2 &v)" << endl;

    return vout;
}

//  -演算子のオーバーロード
Vector2 operator-(const Vector2 &v1, const Vector2 &v2)
{
    Vector2 v;
    v.x = v1.x - v2.x;
    v.y = v1.y - v2.y;

    cout << "Vector2 operator-(const Vector2& v1,const Vector2& v2)" << endl;

    return v;
}
/*
Vector2 Vector2::operator-(const Vector2 &v)
{
    Vector2 vout;
    vout.x = x - v.x;
    vout.y = y - v.y;

    cout << "Vector2 Vector2::operator-(const Vector2 &v)" << endl;

    return vout;
}
*/

//  スカラー倍
/*
Vector2 operator*(const double d, const Vector2 &v)
{
    Vector2 r;
    r.x = d * v.x;
    r.y = d * v.y;

    cout << "Vector2 operator*(const double d, const Vector2& v)" << endl;

    return r;
}
*/

Vector2 Vector2::operator*(const double d)
{
    Vector2 vout;
    vout.x = d * x;
    vout.y = d * y;

    cout << "Vector2 Vector2::operator*(const double d)" << endl;

    return vout;
}

//  =演算子のオーバーロード
Vector2 &Vector2::operator=(const Vector2 &v)
{
    x = v.x;
    y = v.y;

    cout << "Vector2 &Vector2::operator=(const Vector2 &v)" << endl;

    return *this;
}
//  +=演算子のオーバーロード
Vector2 &Vector2::operator+=(const Vector2 &v)
{
    x += v.x;
    y += v.y;

    cout << "Vector2 &Vector2::operator+=(const Vector2 &v)" << endl;

    return *this;
}
//  -=演算子のオーバーロード
Vector2 &Vector2::operator-=(const Vector2 &v)
{
    x -= v.x;
    y -= v.y;

    cout << "Vector2 &Vector2::operator-=(const Vector2 &v)" << endl;

    return *this;
}