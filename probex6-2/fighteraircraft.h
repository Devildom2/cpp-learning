#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H
 
#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;
 
//  戦闘機クラス
class FighterAircraft : public AirPlane{

public:
    const string m_type;
public:
    //  コンストラクタ
    FighterAircraft();
//    using AirPlane::AirPlane;
    ~FighterAircraft() { cout << "~FighterAircraft()" << endl; };;
    //  タイプの取得
    //string getType();
    //  飛行する
    void fly();
    //  戦闘する
    void fight();
};
 
#endif // _FIGHTERAIRCRAFT_H_