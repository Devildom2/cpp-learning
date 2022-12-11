#include "Vector3.h"

//  =演算子のオーバーロード
Vector3& Vector3::operator=(const Vector3 &v)
{
    cout << "         Vector3 &Vector3::operator=(const Vector3 &v)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         " << v.x << " " << v.y << " " << v.z << endl;
    x = v.x;
    y = v.y;
    z = v.z;

    return *this;
}
//  +=演算子のオーバーロード
Vector3 &Vector3::operator+=(const Vector3 &v)
{
    cout << "         Vector3 &Vector3::operator+=(const Vector3 &v)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         " << v.x << " " << v.y << " " << v.z << endl;

    x += v.x;
    y += v.y;
    z += v.z;

    return *this;
}
//  -=演算子のオーバーロード
Vector3 &Vector3::operator-=(const Vector3 &v)
{
    cout << "         Vector3 &Vector3::operator-=(const Vector3 &v)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         " << v.x << " " << v.y << " " << v.z << endl;

    x -= v.x;
    y -= v.y;
    z -= v.z;

    return *this;
}

//  +演算子のオーバーロード
Vector3 Vector3::operator+(const Vector3 &v)
{
    cout << "         Vector3 Vector3::operator+(const Vector3 &v)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         " << v.x << " " << v.y << " " << v.z << endl;

    Vector3 vout;
    vout.x = x + v.x;
    vout.y = y + v.y;
    vout.z = z + v.z;    

    return vout;
}

//  -演算子のオーバーロード
Vector3 Vector3::operator-(const Vector3 &v)
{
    cout << "         Vector3 Vector3::operator-(const Vector3 &v)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         " << v.x << " " << v.y << " " << v.z << endl;    

    Vector3 vout;
    vout.x = x - v.x;
    vout.y = y - v.y;
    vout.z = z - v.z;

    return vout;
}

//  スカラー倍
Vector3 Vector3::operator*(const double d)
{
    cout << "         Vector3 Vector3::operator*(const double d)" << endl;
    cout << "         " << x << " " << y << " " << z  << endl;
    cout << "         double " << d << endl;

    Vector3 vout;
    vout.x = d * x;
    vout.y = d * y;
    vout.z = d * z;

    return vout;
}

