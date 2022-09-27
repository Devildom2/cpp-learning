#include "NewString.h"
 
//  コンストラクタ
NewString::NewString()
{
    m_value = "";
}
//  値を代入するコンストラクタ①（文字列から）
NewString::NewString(string value)
{
    m_value = value;
}
//  値を代入するコンストラクタ②（他のクラスから)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  値を代入
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}
//  stringで値を取得
string NewString::getValue()
{
    return m_value;
}