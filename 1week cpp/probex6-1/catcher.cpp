#include "catcher.h"
 
Catcher::Catcher(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}
//  野手がプレイする
void Catcher::play()
{
    cout << "ピッチャーの球を受ける" << endl;
}