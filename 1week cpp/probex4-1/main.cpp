#include <iostream>
#include <vector>

#define _countof(array) (sizeof(array) / sizeof(array[0]))

using namespace std;

template <typename T>
void show_array(T &array)
{
    for (auto itr = array.begin(); itr != array.end(); itr++)
    {
        cout << "[" << *itr << "]";
    }
    cout << endl;
}

int main()
{
    int input;
    vector<int> vOdd;
    vector<int> vEven;
    for (; (cin >> input) && (input != -1);)
    {
        if (input % 2)
        {
            vOdd.push_back(input);
        }
        else
        {
            vEven.push_back(input);
        }
    }

    cout << "入力完了" << endl
         << endl;

    cout << "奇数：";
    show_array(vOdd);

    cout << "偶数：";
    show_array(vEven);

    /*   for (auto itr = vOdd.begin(); itr != vOdd.end(); itr++)
       {
           cout << "[" << *itr << "]";
       }
       cout << endl;
   */
    /*
      for (auto itr = vEven.begin(); itr != vEven.end(); itr++)
      {
          cout << "[" << *itr << "]";
      }
      cout << endl;
  */
    return 0;
}