#pragma once


//定数
const int INPUT_MIN = 0;
const int INPUT_MAX = 2;
const int HAND_NUMBER = 3;
const int EXPERIENCE_POINT_MIN = 1;
const int EXPERIENCE_POINT_MAX = 15;
const int LEVEL_UP = 20;

//列挙体
enum HAND
{
	ROCK,       //ROCK = 0
	SCISSORS,   //SCISSORS = 1
	PAPER       //PAPER = 2
};

//入力チェック関数
int InputCheck(int min, int max);

//判定関数
int Judgement(int player, int cpu);

//レベルアップ関数
void LevelUp(int& exp, int& lv);

//ゲーム関数
void Game(int &exp, int &level);

//入力した手を表示
void ShowHand(int hand);