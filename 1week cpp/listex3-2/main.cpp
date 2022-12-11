#include <iostream>
#include <string>

#include "calc.h"

using namespace std;

int main(){
    CCalc<int> m_CalcInt;
    CCalc<string> m_CalcStr;

    m_CalcInt.set(1,2);
    m_CalcStr.set("ABC","DEF");
    
    cout << m_CalcInt.add() << endl << m_CalcStr.add() << endl;

    return 0;
}