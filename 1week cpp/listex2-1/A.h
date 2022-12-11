#ifndef _A_H_
#define _A_H_

class B; // class Bの前方宣言

class A
{
private:
    B* m_pB;
public:
    A();    // コンストラクタ
    void foo();
    void bar();
};

#endif