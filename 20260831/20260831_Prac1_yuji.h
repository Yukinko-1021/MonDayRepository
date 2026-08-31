#pragma once
#include<iostream>
using namespace std;

class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:

    //口座名義人の情報と残高から口座を作成する
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    double getBalance() const {
        return balance;
    }

    //Deposited:預け入れた
    void deposit(double amount) {
        //もし預ける金額が0より大きい場合
        if (amount > 0) {
            //残高に預け入れる金額を足す
            balance += amount;
            //預け入れた後の残高を表示
            cout << "Deposited: " << amount << "\n";
        }
        //Invaled:無効
        //預け入れるお金が無ければ、預け入れは無効となったことを表示する。
        else {
            cout << "Invalid deposit amount.\n";
        }
    }

    //withdraw:撤回する（今回は「引き出す」）
    void withdraw(double amount) {
        //もし引き出す金額の数字が0より大きくて残高より少ない場合
        if (amount > 0 && amount <= balance)
        {
            //残高からお金を引き出す
            balance -= amount;
            //引き出したのちの銀行残高を表示
            cout << "Withdrawn: " << amount << "\n";
        }
        //引き出そうとする金額が残高より多い、または0以下の場合
        else
        {
            //insufficient funds:残高不足
            //残高が足りず引き出しができないと表示する
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    //Account Holder:口座名義人
    //Current Balance:現在の残高
    //口座の所有者の名前と現在の残高を表示する
    void displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }
};