#include "passengerplane.h"
 
//  コンストラクタ
PassengerPlane::PassengerPlane() : AirPlane("旅客機1"), m_type("旅客機2")
{
    cout << "PassengerPlane::PassengerPlane()" << endl;
}

//  タイプの取得
/*
string PassengerPlane::getType()
{
    return "上書きされてるよPassengerPlane";
}
*/

//  飛行する
void PassengerPlane::fly()
{
    cout << "乗客を乗せて目的地まで飛行します。" << endl;
}
//  乗客を運ぶ
void PassengerPlane::carryPassengers()
{
    cout << "乗客を目的地まで運びます" << endl;
}