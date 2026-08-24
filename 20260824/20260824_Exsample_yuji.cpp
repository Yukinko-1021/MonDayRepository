#include <iostream>
using namespace std;

int main(void)
{
    //a変数を宣言（定義）
    int a = 0;

    //aが「&」でアドレスを取得し、pが「*」でアドレスを受け取れるようにする。
    int* p = &a;

    //aの宣言した変数の0を表示
    cout << "aの初期値: " << a << endl;

    //アドレスを取得しているaの数字を10に変更する
    *p = 10;

    //アドレスを受け取っているpの数字が変わったため、aで表示される数字が10になる。
    cout << "aの変更後の値: " << a << endl;

    //処理終了
    return 0;
}