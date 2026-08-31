#include <iostream>
#include <string>
#include"20260831_Prac1_yuji.h"
using namespace std;



int main() {
    BankAccount account("Alice", 5000.0); //口座名義人:Alice   //口座残高:5000円

    account.displayAccountInfo(); //現在の口座情報を表示

    account.deposit(1000.0);  //残高に1000円預け入れる
    account.withdraw(2000.0); //残高から2000円引き出す
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo(); //残高が変わった後の口座情報を表示

    return 0;
}