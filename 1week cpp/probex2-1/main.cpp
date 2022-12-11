#include "foo.h"
#include "bar.h"
#include <iostream>
 
using namespace std;
 
int main(){
    Foo* pFoo;
    Bar* pBar;

    pFoo = new Foo();
    pBar = new Bar();
    
    pBar->func1(pFoo);  //hoge
    pBar->func2();      //func2
    pFoo->fuga(pBar);   //fuga func2
    pFoo->hoge();       //hoge

}

/* 期待出力
Foo::hoge()
Bar::func2()
Foo::fuga()
Bar::func2()
Foo::hoge()
*/