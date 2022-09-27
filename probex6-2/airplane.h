#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>
#include <string>

using namespace std;

//  飛行機クラス
class AirPlane
{
private:
    string m_type;

public:
    //  コンストラクタ
    AirPlane(string);
    //    AirPlane();
    // 仮想デストラクタ
    virtual ~AirPlane() { cout << "~AirPlane()" << endl; };
    //  タイプの取得
    virtual string getType() final;
    //  飛行する
    virtual void fly() = 0;
};

#endif // _AIRPLANE_H_