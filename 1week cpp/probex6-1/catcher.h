#ifndef _CATCHER_H_
#define _CATCHER_H_
 
#include "baseballplayer.h"
 
class Catcher : public BaseballPlayer{
public:
    //  コンストラクタ
    Catcher(string name,int number);
    //  投手がプレイする
    void play();
};
 
#endif // _CATCHER_H_