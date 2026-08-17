#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header_yuji.h"

using namespace std;

//==========================================================
//定数
//==========================================================

//選択する球種の数字の最小値
const int PITING_MIN = 0;
//選択する球種の数字の最大値
const int PITING_MAX = 3;
//確率設定
const int PROBABILITY = 4;
//ストライクの回数上限値
const int STRIKE_COUNT = 3;
//ボールの回数上限値
const int BALL_COUNT = 4;
//アウトの回数上限値
const int OUT_COUNT = 3;
//ヒットの回数上限値
const int HIT_COUNT = 4;

int main(void)
{
    //=====================================================
    //変数宣言
    //=====================================================

    //プレイヤーと敵の入力数字
    int ply, emy;
    //確率の変数(４分の１で設定済み）
    int prod;
    //ストライク回数の変数
    int Strike = 0;
    //ボール回数の変数
    int Ball = 0;
    //アウト回数の変数
    int Out = 0;
    //ヒット回数の変数
    int Hit = 0;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //=======================================================
    //ゲームスタート
    //=======================================================
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲームループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力範囲チェック
        while (true)
        {
            //プレイヤーに数字を入力させる
            cin >> ply;
            //もし定数で設定した最大値、最小値から入力数字漏れていた場合は再度入力させる
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            //範囲内で入力されている場合は入力チェックループを終了
            else
            {
                break;
            }
        }

        //functionで書いた数字ごとの球種を表示させる
        PitingType(ply);

        //敵に定数より、0～3の範囲で数字を一つランダムに生成する
        emy = rand() % PROBABILITY;

        //確率の変数に0～3の範囲で数字を一つランダムに生成する
        prod = rand() % PROBABILITY;

        //もしプレイヤーの数字と敵の数字が異なる場合
        if (ply != emy)
        {
            //もし確率変数に生成された数字が0の場合はボールとなり、ボール変数が1増える(25%の確率）
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            //確率変数に生成された数字が0以外の時はストライクとなり、ストライク変数が1増える(75%の確率）
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーと敵の数字が同じ場合
        else
        {
            //ストライク変数とボール変数の数字を0に戻す
            Strike = 0;
            Ball = 0;

            //もし確率変数に生成された数字が1の時はアウトとなり、アウト変数が1増える(25%の確率）
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            //確率変数に生成された数字が1以外の時はヒットとなり、ヒット変数が1増える(75%の確率）
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }

        //もしストライク変数がストライク定数よりも大きくなる、またはボール変数がボール定数よりも大きくなる場合
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //もしストライク変数の数字がストライク定数の3以上になった時、アウト変数を1増やす
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ストライク以外、ボール変数がボール定数の4以上になった時、ヒット変数を1増やす
            else
            {
                Hit++;
            }

            //ストライク変数とボール変数の数字を0に戻す
            Strike = 0;
            Ball = 0;
        }

        //試合の途中経過を表示させる(ボール、ストライク、アウト、ヒットの回数を表示）
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //functionより、試合の勝敗判定をする
    Result(Out);
    //プログラム終了
    return 0;
}