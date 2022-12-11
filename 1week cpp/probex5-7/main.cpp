#include <iostream>
#include <string>
#include <stack>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

//  成分の表示
template <typename T>
void show_array(T &array)
{
    for (auto itr = array.begin(); itr != array.end(); itr++)
    {
        cout << "[" << *itr << "] ";
    }
    cout << endl;
}

int main()
{
    string str;
    stack<char> stack_str;

    for (; cout << "文字列を入力：" && getline(cin, str) && !str.empty();)
    {
        for (auto itr = str.cbegin(); itr != str.end(); itr++)
            stack_str.push(*itr);
        // show_array(qu_str);
        while (!stack_str.empty())
        {
            cout << stack_str.top();
            stack_str.pop();
        }
        cout << endl;
    }
}