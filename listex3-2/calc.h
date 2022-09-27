#ifndef _CALC_H
#define _CALC_H

template<typename T> class CCalc{
    T m_n1;
    T m_n2;

public:
    inline void set(T n1, T n2){
        m_n1 = n1;
        m_n2 = n2;
    };
    inline T add() const {
        return m_n1 + m_n2;
    };
};

#endif