#include "all.h"

// 関数はmainの上に書く
int plus( int x, int y )
{
    return x + y ;
}

// もしくは宣言だけmainの上に書いて、中身を下に書くこともできる。
double plus( double x, double y );

int main()
{
    // 整数の変数
    auto answer = 42 ;
    std::cout << answer << "\n"s ;
    // 浮動小数点数の変数
    auto pi = 3.14 ;
    std::cout << pi << "\n"s ;

    // 文字列の変数
    auto question = "Life, The Universe, and Everything."s ;
    std::cout << question << "\n";

    // 初期化はこんな風にもできる
    auto a = 1 ;
    auto b(2) ;
    auto c{3} ;

    // autoではなく具体的な型ももちろん書ける
    int i = 123 ;
    double d = 1.23 ;
    std::string s = "string"s;


    // ラムダ式
    auto twice = [](auto x)
    {
        std::cout << x << " "s << x << "\n"s ;
    } ;

    twice(5) ;

    auto x = plus( 1, 2 ) ;
    std::cout << x << "\n" ;

    auto double_x = plus(1.5, 2.0) ;
    std::cout << double_x << "\n" ;

}

double plus( double x, double y )
{
    return x + y ;
}