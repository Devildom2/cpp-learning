#include <iostream>

#include "A.h"
#include "B.h"

A::A(){
    m_pB = new B(this);
};

void A::foo(){
    std::cout << "foo" << std::endl;
};

void A::bar(){
    m_pB->hoge();
};

