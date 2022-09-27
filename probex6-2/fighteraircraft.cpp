#include "fighteraircraft.h"
 
//  コンストラクタ
FighterAircraft::FighterAircraft() : AirPlane("戦闘機1"), m_type("戦闘機2")
{
    cout << "FighterAircraft::FighterAircraft()" << endl;
}

//  タイプの取得
/*
string FighterAircraft::getType()
{
    return "上書きされてるよFighter";
}
*/

//  飛行する
void FighterAircraft::fly()
{
    cout << "攻撃に出るために飛行" << endl;
}
//  戦闘する
void FighterAircraft::fight()
{
    cout << "戦闘します" << endl;
}