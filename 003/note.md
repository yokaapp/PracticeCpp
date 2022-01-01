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
