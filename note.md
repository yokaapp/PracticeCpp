# 003-guide-to-c++


## 標準出力

`<iostream>`ライブラリを利用する。

std::coutは標準出力を使うためのライブラリ。



## 文字列

二重引用符で囲む。

末尾に`s`をつける。

"文字列"s.size()のように" "の末尾に`s`をつける必要がある。

単に"文字列".size()と書いた場合はコンパイルエラーになる。

[APG4b - M - 1.12.文字列と文字](https://atcoder.jp/contests/apg4b/tasks/APG4b_m?lang=ja)
~~~cpp
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない
}
~~~


文字列の結合は`+`でできる。



# 005-the-restaurant-at-the-end-of-the-branch

## bool型
bool型の値を正しく出力するには、`std::boolalpha`を出力する。
~~~C++
int main()
{
    std::cout << std::boolalpha ;
    std::cout << true << "\n"s << false ;
}
~~~
`std::boolalpha`自体は何も出力をしない。一度`std::boolalpha`を出力すると、それ以降のbool値がtrue/falseで出力されるようになる。

元に戻すには`std::noboolalpha`を使う。
~~~C++
int main()
{
    std::cout << std::boolalpha ;
    std::cout << true << false ;  // truefalse
    std::cout << std::noboolalpha ;
    std::cout << true << false ;  // 10
}
~~~


### 短絡評価

`a && b` でaがfalseの場合、bのtrue/falseに関わらずfalseになるので、bは評価されない。

このように左から右に最小限の評価(=短絡評価)が行われる。

同様に、`a || b` でaがtrueの場合、bのtrue/falseに関わらずtrueになるので、bは評価されない。


### boolの変換

true → 1  
false → 0
  
非ゼロ → true  
ゼロ → false