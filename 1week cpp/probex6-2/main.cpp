#include <iostream>
#include "fighteraircraft.h"
#include "passengerplane.h"
 
using namespace std;
 
int main(){
    //  戦闘機クラスのインスタンスの生成
    //FighterAircraft* fighter = new FighterAircraft();
    //PassengerPlane* airlinear = new PassengerPlane();

    AirPlane* fighter = new FighterAircraft();
    AirPlane* airlinear = new PassengerPlane();

    //  戦闘機クラスの処理
    cout << fighter->getType() << endl;
    cout << dynamic_cast<FighterAircraft*>(fighter)->getType() << endl;
//    cout << dynamic_cast<FighterAircraft*>(fighter)->m_type << endl;
    fighter->fly();                  //  飛行する
    dynamic_cast<FighterAircraft*>(fighter)->fight();                //  戦闘する
    //  旅客機クラスの処理
    cout << airlinear->getType() << endl; 
    cout << dynamic_cast<PassengerPlane*>(airlinear)->getType() << endl;
//    cout << dynamic_cast<PassengerPlane*>(airlinear)->m_type << endl;

    airlinear->fly();                //  飛行する
    dynamic_cast<PassengerPlane*>(airlinear)->carryPassengers();    //  乗客を運ぶ
    //  delete処理
    delete fighter;
    delete airlinear;
}