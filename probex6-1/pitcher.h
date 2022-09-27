#ifndef _PITCHER_H_
#define _PITCHER_H_
 
#include "baseballplayer.h"
 
class Pitcher : public BaseballPlayer{
public:
    //  コンストラクタ
    Pitcher(string name,int number);
    //  ピッチャーがプレイする
    void play();
};
 
#endif //_PITCHER_H_