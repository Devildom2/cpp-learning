#include "airplane.h"
 
//  コンストラクタ
AirPlane::AirPlane(string type)
{
    m_type = type;
    cout << "AirPlane::AirPlane()" << endl;
}

//  タイプの取得
string AirPlane::getType()
{
    return m_type;
}
