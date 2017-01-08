#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void printGrid();
void erklaerung();
void wait(int seconds);
void zugS1();
void zugS2();
void clear();
void S1won();
void S2won();
void clearScrean();
void credits();
char f1 = '1';
char f2 = '2';
char f3 = '3';
char f4 = '4';
char f5 = '5';
char f6 = '6';
char f7 = '7';
char f8 = '8';
char f9 = '9';
int s1 = 0;
int s2 = 0;
int won = 0;

int main()
{

    erklaerung();
    while (won == 0){
        printGrid();
        zugS1();
        clearScrean();
        S1won();
        if(won == 1){
            break;
        }
        printGrid();
        zugS2();
        clearScrean();
        S2won();
        if(won == 2){
            break;
        }

    }
    if(won == 1){
        cout << "Spieler 1 hat gewonnen!!!" << endl;
        wait(3);
    }
    if(won==2){
        cout << "Spieler 2 hat gewonnen!!!"  << endl;
        wait(3);
    }
    clearScrean();
    credits();
    wait(10);
    return 0;
}

void wait ( int seconds ){
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK ;
  while (clock() < endwait) {}
}

void printGrid(){
    cout << "   |   |   " << endl;
    cout << " " << f1 << " | " << f2 << " | " << f3 << " " << endl;
    cout << "---|---|---" << endl;
    cout << " " << f4 << " | " << f5 << " | " << f6 << " " << endl;
    cout << "---|---|---" << endl;
    cout << " " << f7 << " | " << f8 << " | " << f9 << " " << endl;
    cout << "   |   |   " << endl;
}


void erklaerung(){
    cout << "Spieler 1 = X" << endl << "Spieler 2 = Null(0)" << endl;
    cout << "Die Nummerierung des Feldes" << endl << endl;
    cout << "   |   |   " << endl;
    cout << " " << f1 << " | " << f2 << " | " << f3 << " " << endl;
    cout << "---|---|---" << endl;
    cout << " " << f4 << " | " << f5 << " | " << f6 << " " << endl;
    cout << "---|---|---" << endl;
    cout << " " << f7 << " | " << f8 << " | " << f9 << " " << endl;
    cout << "   |   |   " << endl;
    wait(5);
    clear();
}

void zugS1(){
    int x = 0;
    bool y = true;
    while(y){
    cout << "Spieler 1, wo willst du dein X hinsetzen(1-9)?" << endl;
    cin >> x;
    cout << endl;
    switch (x){
        case 1: //------------------------------------------------------------------------------------------------------------------------
    while (f1 == 'O' && x == 1){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f1 == ' ' && x == 1){
    f1 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 2://------------------------------------------------------------------------------------------------------------------------
    while (f2 == 'O' && x == 2){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f2 == ' ' && x == 2){
    f2 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 3://------------------------------------------------------------------------------------------------------------------------
    while (f3 == 'O' && x == 3){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f3 == ' ' && x == 3){
    f3 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 4://------------------------------------------------------------------------------------------------------------------------
    while (f4 == 'O' && x == 4){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f4 == ' ' && x == 4){
    f4 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 5://------------------------------------------------------------------------------------------------------------------------
    while (f5 == 'O' && x == 5){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f5 == ' ' && x == 5){
    f5 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 6://------------------------------------------------------------------------------------------------------------------------
    while (f6 == 'O' && x == 6){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f6 == ' ' && x == 6){
    f6 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 7://------------------------------------------------------------------------------------------------------------------------
    while (f7 == 'O' && x == 7){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f7 == ' ' && x == 7){
    f7 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 8://------------------------------------------------------------------------------------------------------------------------
    while (f8 == 'O' && x == 8){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f8 == ' ' && x == 8){
    f8 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 9://------------------------------------------------------------------------------------------------------------------------
    while (f9 == 'O' && x == 9){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f9 == ' ' && x == 9){
    f9 = 'X';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        default://------------------------------------------------------------------------------------------------------------------------
            cout << "Das war kein gültiges Feld!" << endl;
            break;
    }
    }
    y = true;
}

void zugS2(){
    int x = 0;
    bool y = true;
    while(y){
    cout << "Spieler 2, wo willst du deine 0 hinsetzen(1-9)?" << endl;
    cin >> x;
    cout << endl;
    switch (x){
        case 1://------------------------------------------------------------------------------------------------------------------------
    while (f1 == 'X' && x == 1){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f1 == ' ' && x == 1){
    f1 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 2://------------------------------------------------------------------------------------------------------------------------
    while (f2 == 'X' && x == 2){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f2 == ' ' && x == 2){
    f2 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 3://------------------------------------------------------------------------------------------------------------------------
    while (f3 == 'X' && x == 3){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f3 == ' ' && x == 3){
    f3 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 4://------------------------------------------------------------------------------------------------------------------------
    while (f4 == 'X' && x == 4){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f4 == ' ' && x == 4){
    f4 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 5://------------------------------------------------------------------------------------------------------------------------
    while (f5 == 'X' && x == 5){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f5 == ' ' && x == 5){
    f5 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 6://------------------------------------------------------------------------------------------------------------------------
    while (f6 == 'X' && x == 6){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f6 == ' ' && x == 6){
    f6 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 7://------------------------------------------------------------------------------------------------------------------------
    while (f7 == 'X' && x == 7){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f7 == ' ' && x == 7){
    f7 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 8://------------------------------------------------------------------------------------------------------------------------
    while (f8 == 'X' && x == 8){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if (f8 == ' ' && x == 8){
    f8 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        case 9://------------------------------------------------------------------------------------------------------------------------
    while (f9 == 'X' && x == 9){
        cout << "Das Feld ist schon besetzt!" << endl << endl;
        break;
    }
    if(f9 == ' ' && x == 9){
    f9 = '0';
    y = false;
    }
    else{
        cout << "Das Feld ist schon besetzt!" << endl << endl;
    }
    break;
        default://------------------------------------------------------------------------------------------------------------------------
            cout << "Das war kein gültiges Feld!" << endl;
            break;
    }
    }
    y = true;
}

void clear(){
    system("cls");
	f1 = f2 = f3 = f4 = f5 = f6 = f7 = f8 = f9 = ' ';
}

void S1won(){
	if (((f1 == 'X') && f1 == f2 && f2 == f3) // 123
		|| ((f4 == 'X') && f4 == f5 && f5 == f6) // 456
		|| ((f7 == 'X') && f7 == f8 && f8 == f9) //789
		|| ((f1 == 'X') && f1 == f4 && f4 == f7) //147
		|| ((f2 == 'X') && f2 == f5 && f5 == f8) //258
		|| ((f3 == 'X') && f3 == f6 && f6 == f9) //369
		|| ((f1 == 'X') && f1 == f5 && f5 == f9) //159
		|| ((f3 == 'X') && f3 == f5 && f5 == f7))//357
		{
		won = 1;
	}
}

void S2won(){
	if (((f1 == '0') && f1 == f2 && f2 == f3) // 123
		|| ((f4 == '0') && f4 == f5 && f5 == f6) // 456
		|| ((f7 == '0') && f7 == f8 && f8 == f9) //789
		|| ((f1 == '0') && f1 == f4 && f4 == f7) //147
		|| ((f2 == '0') && f2 == f5 && f5 == f8) //258
		|| ((f3 == '0') && f3 == f6 && f6 == f9) //369
		|| ((f1 == '0') && f1 == f5 && f5 == f9) //159
		|| ((f3 == '0') && f3 == f5 && f5 == f7))//357
		{
		won = 2;
	}
}

void clearScrean(){
    system("cls");
}

void credits(){
cout << " _          _____                 _ " << endl;
cout << "| |_ _ _   |_   _|___ ___ ___ ___| |_ ___ ___" << endl;
cout << "| . | | |    | | | . | .'| .'|_ -|  _| -_|  _|" << endl;
cout << "|___|_  |    |_| |___|__,|__,|___|_| |___|_| " << endl;
cout << "    |___|                         " << endl;
}
