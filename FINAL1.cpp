#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<windows.h>
#include<cstring>
#include<fstream>
using namespace std;
int j=1;
void EPN(const string &str) 
{
    for(int i = 0;i<str.length();i++)
    {
    	if(j==14)
    	{
    		j = 1;
		}
      foreColor(j);
      cout << str[i];delay(10);
      j++;
    }
}

void FullScreen(){
  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
    csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
    GetConsoleScreenBufferInfoEx(hOut, &csbi);
    csbi.dwSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    csbi.dwSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    csbi.dwMaximumWindowSize.X = csbi.dwSize.X;
    csbi.dwMaximumWindowSize.Y = csbi.dwSize.Y;
    SetConsoleScreenBufferInfoEx(hOut, &csbi);
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_MAXIMIZE);
}
void ClearLine(int lineNumber) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Get the current cursor position
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);

    // Move the cursor to the desired line
    COORD cursorPosition = { 0, static_cast<SHORT>(lineNumber) };
    SetConsoleCursorPosition(hConsole, cursorPosition);

    // Clear the line by overwriting it with spaces
    std::cout << std::string(consoleInfo.dwSize.X, ' ');

    // Reset the cursor to the start of the line
    SetConsoleCursorPosition(hConsole, cursorPosition);
}
class grammarclass{
	public:
		int idPa, idSi, idPer, idFu;
		char namePa[30], nameSi[30], namePer[30], nameFu[30], ScPa[30], ScSi[30], ScPer[30], ScFu[30], genPa[5], genSi[5], genPer[5], genFu[5];
	
	void Congratulations()
	{
		//Congratulations
	    gotoxy(27+20,4-4+3);foreColor(2);cout << "   _____                            _         _       _   _                 ";delay(100);
	    gotoxy(27+20,5-4+3);foreColor(3);cout << "  / ____|                          | |       | |     | | (_)                ";delay(100);
	    gotoxy(27+20,6-4+3);foreColor(4);cout << " | |     ___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_ _  ___  _ __  ___ ";delay(100);
	    gotoxy(27+20,7-4+3);foreColor(5);cout << " | |   /  _ \\| '_ \\/  _` | '__/ _` | __| | | | |/ _` | __| |/ _ \\| '_ \\/ __|";delay(100);
	    gotoxy(27+20,8-4+3);foreColor(6);cout << " | |___| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \\__ \\ ";delay(100);
     	gotoxy(27+20,9-4+3);foreColor(7);cout << "  \\_____\\___/|_| |_|\\__, |_|  \\__,_|\\__|\\__,_|_|\\__,_|\\__|_|\\___/|_| |_|___/";delay(100);
	    gotoxy(27+20,10-4+3);foreColor(9);cout<< "                     __/ |                                                  ";delay(100);
	    gotoxy(27+20,11-4+3);foreColor(8);cout<< "                    |___/                                                   ";delay(100);
	    DrawRectangle(20+34+11,15-8+4,1,20,1);delay(50);// blue left side
		DrawRectangle(60+34+11,15-8+4,1,20,1);delay(50);// blue right side
		DrawRectangle(14+34+11,16-8+4,4,0,2);delay(50);//green left above
	    DrawRectangle(63+34+11,16-8+4,4,0,2);delay(50);// green right above
	    DrawRectangle(14+34+11,39-8+4,4,0,2);delay(50);// green left below
	    DrawRectangle(63+34+11,39-8+4,4,0,2);delay(50);// green right below
	    DrawRectangle(12+34+11,16-8+4,0,23,7);delay(50);// white left
	    DrawRectangle(12+34+9,16-7+4,0,23,7);
	    DrawRectangle(12+34+7,16-6+4,0,23,7);
	    DrawRectangle(69+34+11,16-8+4,0,23,7);delay(50);// white right
	    DrawRectangle(69+34+13,16-7+4,0,23,7);
	    DrawRectangle(69+34+15,16-6+4,0,23,7);
	    drawBoxSingleLineWithBG(20+34+11,42-11+4,41,1,7);delay(50);//blue  below
	    drawBoxSingleLineWithBG(21+34+11,43-11+4,39,1,9);delay(50);// blue  below
	    drawBoxSingleLineWithBG(22+34+11,44-11+4,37,1,2);delay(50);//green below
		DrawRectangle(23+34+11,15,35,1,2);
	    DrawRectangle(26+34+11,24,29,1,2);
	    DrawRectangle(24+34+11,27,33,1,2);
	    gotoxy(32+34+3,16);cout << "See your results and coupon below!"; 
	}
	void InsertBox()
	{
	    //  VLine(40+35+13,6,23,8,'|');delay(300);
	    DrawRectangle(30+13,1,90,2,3);
	    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(100);//big box middle
	    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(100);// very small red box left  above
	    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(100);// very small red box right above
	    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(100);// very small red box left below
	    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(100);// very small red box right below
	    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(100);// yellow above left
	    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(100);// yellow above right
	    // real
	    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(100);// yelllow below left
	    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(100);// yellow below right
	    // fake
	    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(100);// yelllow below left
	    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(100);// yellow below right
	    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
	    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
	    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
	    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
	    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
	    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
	    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
	    DrawRectangle(16+48,36,6,1,3);// box back;
	    DrawRectangle(57+48,36,6,1,3);// box exit
	    DrawRectangle(39+48,36,1,2,3);// box style middle; 
	    HLine(17+48,6,1,4,'\3');delay(100);
	    HLine(17+48,30,1,4,'\4');delay(100);
	    HLine(61+48,6,1,4,'\4');delay(100);
	    HLine(61+48,30,1,4,'\3');delay(100); 
	}
	void InputD()
	{
	    gotoxy(17+51+16,10);foreColor(0);cout << "IDENTIFY";
	    DrawRectangle(17+52,11,37,1,0);			
	    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
	    gotoxy(17+51+8+6,15);foreColor(0);cout << "YOUR NAME";
	    DrawRectangle(17+52,16,37,1,0);			 
	    gotoxy(17+52,17);cout << "ENTER HERE: ";
	    gotoxy(17+51+17,20);cout <<   "GENDER";
	    DrawRectangle(17+52,21,37,1,0); 
	    gotoxy(17+52,22);cout << "ENTER HERE: ";
	    gotoxy(17+51+17,25);cout << "SCHOOL";
	    DrawRectangle(17+52,26,37,1,0);
	    gotoxy(17+52,27);cout << "ENTER HERE: ";
	    // caption
	    gotoxy(54+17,3);EPN("Please Complete Your Information");	    					 
	    foreColor(4);cout << " \3";    
	}
	void InputPast()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> idPa;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namePa, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(genPa, 5);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(ScPa, 30);fflush(stdin);cin.clear();
	}
	void InputPresent()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> idSi;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(nameSi, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(genSi, 5);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(ScSi, 30);fflush(stdin);cin.clear();
	}
	void InputPerfect()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> idPer;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namePer, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(genPer, 5);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(ScPer, 30);fflush(stdin);cin.clear();
	}
	void InputFuture()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> idFu;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(nameFu, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(genFu, 5);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(ScFu, 30);fflush(stdin);cin.clear();
	}
	void InforGBoxView()
	{
		DrawRectangle(30+13,1,90,2,3);
	    drawBoxSingleLineWithBG(20+48-8,5,55,25,3);delay(100);//big box middle
	    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(100);// yelllow below left
	    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(100);// yellow below right
	    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
	    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
	    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
	    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
	    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
	    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
	    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
	    DrawRectangle(16+48,36,6,1,3);// box back;
	    DrawRectangle(57+48,36,6,1,3);// box exit
	    DrawRectangle(39+48,36,1,2,3);// box style middle; 
	    HLine(17+48-29+25,6,1,4,'\3');delay(100);
	    HLine(17+48-29+25,30,1,4,'\4');delay(100);
	    HLine(61+48-21+25,6,1,4,'\4');delay(100);
	    HLine(61+48-21+25,30,1,4,'\3');delay(100);
	    gotoxy(54+12-3,34);foreColor(0);cout << "    PRESS ENTER FOR STAY HERE OR ESC FOR BACK";
	    gotoxy(54+12-3,3);foreColor(0);cout << "HERE IS THE INFORMATION OF CANDIDATE DID GRAMMAR";	    										
	    foreColor(4);cout << " \3";   
	    gotoxy(17+51-6,7);foreColor(0);cout << left << setw(10) << "IDENTIFY" << setw(20) << "NAME OF CANDIDATES" << setw(10) << "GENDER"  <<"SCHOOL" <<"\n"<< endl;
	}
	void OutInforFu()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << idFu << setw(20) << nameFu << setw(10) << genFu << ScFu << "\n" <<endl;
	}
	void OutInforSi()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << idSi << setw(20) << nameSi << setw(10) << genSi << ScSi << "\n" <<endl;
	}
	void OutInforPa()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << idPa << setw(20) << namePa << setw(10) << genPa << ScPa << "\n" <<endl;
	}
	void OutInforPer()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << idPer << setw(20) << namePer << setw(10) << genPer << ScPer << "\n" <<endl;
	}
	void GoodLuck()
	{
		DrawRectangle(30,1,116,2,3);
	    DrawRectangle(13+25,5,101,37,3);delay(10);//big box middle
	    drawBoxSingleLineWithBG(12+25,5,2,10,6);delay(10);// yellow above left
	    drawBoxSingleLineWithBG(65+46+27,5,2,10,6);delay(10);// yellow above right
	    // real
	    drawBoxSingleLineWithBG(12+25,19,2,9,6);delay(10);// yelllow below left
	    drawBoxSingleLineWithBG(65+46+27,19,2,9,6);delay(10);// yellow below right
	    // fake
	    drawBoxSingleLineWithBG(12+25,32,2,10,6);delay(10);// yelllow below left
	    drawBoxSingleLineWithBG(65+46+27,32,2,10,6);delay(10);// yellow below right
	    DrawRectangle(8+25,6,2,35,5);delay(10);// purple left side
	    DrawRectangle(69+46+27,6,2,35,5);delay(10);// purple right side
	    DrawRectangle(5+25,7,2,33,9);delay(10);// blue left side
	    DrawRectangle(72+46+27,7,2,33,9);delay(10);// blue right side
	    DrawRectangle(2+25,8,2,31,3);delay(10);// similar white left
	    DrawRectangle(75+46+27,8,2,31,3);delay(10);// similar white right
	    // good luck
	    gotoxy(13,5-4);foreColor(3);cout  << " $$$$$$\\  ";delay(10);
	    gotoxy(13,6-4);foreColor(3);cout  << "$$  __$$\\ ";delay(10);
	    gotoxy(13,7-4);foreColor(3);cout  << "$$ /  \\__|";delay(10);
	    gotoxy(13,8-4);foreColor(3);cout  << "$$ |$$$$\\ ";delay(10);
	    gotoxy(13,9-4);foreColor(3);cout  << "$$ |\\_$$ |";delay(10);
	    gotoxy(13,10-4);foreColor(3);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,11-4);foreColor(3);cout << "\\$$$$$$  |";delay(10);
	    gotoxy(13,12-4);foreColor(3);cout << " \\______/ ";delay(10);
	    gotoxy(13,17-4);foreColor(4);cout << " $$$$$$\\  ";delay(10);
	    gotoxy(13,18-4);foreColor(4);cout << "$$  __$$\\ ";delay(10);
	    gotoxy(13,19-4);foreColor(4);cout << "$$ /  $$ |";delay(10);
	    gotoxy(13,20-4);foreColor(4);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,21-4);foreColor(4);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,22-4);foreColor(4);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,23-4);foreColor(4);cout << " $$$$$$  |";delay(10);
	    gotoxy(13,24-4);foreColor(4);cout << " \\______/ ";delay(10);
	    gotoxy(13,28-4);foreColor(5);cout << " $$$$$$\\  ";delay(10);
	    gotoxy(13,29-4);foreColor(5);cout << "$$  __$$\\ ";delay(10);
	    gotoxy(13,30-4);foreColor(5);cout << "$$ /  $$ |";delay(10);
	    gotoxy(13,31-4);foreColor(5);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,32-4);foreColor(5);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,33-4);foreColor(5);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,34-4);foreColor(5);cout << " $$$$$$  |";delay(10);
	    gotoxy(13,35-4);foreColor(5);cout << " \\______/ ";delay(10);
	    gotoxy(13,40-4);foreColor(6);cout << "$$$$$$$\\  ";delay(10);
	    gotoxy(13,41-4);foreColor(6);cout << "$$  __$$\\ ";delay(10);
	    gotoxy(13,42-4);foreColor(6);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,43-4);foreColor(6);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,44-4);foreColor(6);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,45-4);foreColor(6);cout << "$$ |  $$ |";delay(10);
	    gotoxy(13,46-4);foreColor(6);cout << "$$$$$$$  |";delay(10);
	    gotoxy(13,47-4);foreColor(6);cout << "\\_______/ ";delay(10);
	    gotoxy(129+24,5-4);foreColor (3);cout << " /$$      ";delay(10);
	    gotoxy(129+24,6-4);foreColor (3);cout << "| $$      ";delay(10);
	    gotoxy(129+24,7-4);foreColor (3);cout << "| $$      ";delay(10);
	    gotoxy(129+24,8-4);foreColor (3);cout << "| $$      ";delay(10);
	    gotoxy(129+24,9-4);foreColor (3);cout << "| $$      ";delay(10);
	    gotoxy(129+24,10-4);foreColor(3);cout << "| $$      ";delay(10);
	    gotoxy(129+24,11-4);foreColor(3);cout << "| $$$$$$$$";delay(10);
	    gotoxy(129+24,12-4);foreColor(3);cout << "|________/";delay(10);
	    gotoxy(129+24,17-4);foreColor(4);cout << " /$$   /$$";delay(10);
	    gotoxy(129+24,18-4);foreColor(4);cout << "| $$  | $$";delay(10);
	    gotoxy(129+24,19-4);foreColor(4);cout << "| $$  | $$";delay(10);
	    gotoxy(129+24,20-4);foreColor(4);cout << "| $$  | $$";delay(10);
	    gotoxy(129+24,21-4);foreColor(4);cout << "| $$  | $$";delay(10);
	    gotoxy(129+24,22-4);foreColor(4);cout << "| $$  | $$";delay(10);
	    gotoxy(129+24,23-4);foreColor(4);cout << "|  $$$$$$/";delay(10);
	    gotoxy(129+24,24-4);foreColor(4);cout << " \\______/ ";delay(10);
	    gotoxy(129+24,28-4);foreColor(5);cout << "  /$$$$$$ ";delay(10);
	    gotoxy(129+24,29-4);foreColor(5);cout << " /$$__  $$";delay(10);
	    gotoxy(129+24,30-4);foreColor(5);cout << "| $$  \\__/";delay(10);
	    gotoxy(129+24,31-4);foreColor(5);cout << "| $$      ";delay(10);
	    gotoxy(129+24,32-4);foreColor(5);cout << "| $$      ";delay(10);
	    gotoxy(129+24,33-4);foreColor(5);cout << "| $$    $$";delay(10);
	    gotoxy(129+24,34-4);foreColor(5);cout << "|  $$$$$$/";delay(10);
	    gotoxy(129+24,35-4);foreColor(5);cout << " \\______/ ";delay(10);
	    gotoxy(129+24,40-4);foreColor(6);cout << " /$$   /$$";delay(10);
	    gotoxy(129+24,41-4);foreColor(6);cout << "| $$  /$$/";delay(10);
	    gotoxy(129+24,42-4);foreColor(6);cout << "| $$ /$$/ ";delay(10);
	    gotoxy(129+24,43-4);foreColor(6);cout << "| $$$$$/  ";delay(10);
	    gotoxy(129+24,44-4);foreColor(6);cout << "| $$  $$  ";delay(10);
	    gotoxy(129+24,45-4);foreColor(6);cout << "| $$\\  $$ ";delay(10);
	    gotoxy(129+24,46-4);foreColor(6);cout << "| $$ \\  $$";delay(10);
	    gotoxy(129+24,47-4);foreColor(6);cout << "|__/  \\__/";delay(10);
	}
	void FPastSimple()
	{
		PastSimple:
		GoodLuck();
		 // title
   		gotoxy(68+16,6-3);EPN("PAST  SIMPLE");
   		gotoxy(63,6);foreColor(4);cout << "Please read the instructions before you start.";
		//gotoxy(45,7);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
		gotoxy(44,8);foreColor(3);cout << "1. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
		gotoxy(58,9);foreColor(3);cout << "2. After finishing, you will get a coupon for your order!";           
	    string a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
	    int aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa12, aa13, aa14, aa15, aa16, aaa;
	    //////1
	    
	    gotoxy(41,11);foreColor(3);cout << "1) I _____________ (not/drink) any beer last night.";gotoxy(46,11);foreColor(3);getline(cin,a1);fflush(stdin);cin.clear();
	    if(a1=="did not drink" || a1== "didn't drink")
	    {
	    	aa1 = 1;
	    	gotoxy(41,11);foreColor(2);cout << "1) I               (not/drink) any beer last night."; gotoxy(46,11);foreColor(2);cout <<a1;
	    	//////2
	    	A2:
	    	gotoxy(41,12+1);foreColor(3);cout << "2) She ______ (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(3);inputLetter(a2);fflush(stdin);cin.clear();
	    	if(a2=="got on")
	    	{
	    		aa2 = 1;
	    		gotoxy(41,12+1);foreColor(2);cout << "2) She        (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(2);cout<< a2;
	    		//////3
	    		A3:
	    		gotoxy(41,13+2);foreColor(3);cout << "3) What time _____________ (he/get up) yesterday?";gotoxy(54,13+2);foreColor(3);getline(cin, a3);fflush(stdin);cin.clear();
	    		if(a3=="did he get up")
	    		{
	    			aa3 = 1;
	    			gotoxy(41,13+2);foreColor(2);cout << "3) What time               (he/get up) yesterday?";gotoxy(54,13+2);foreColor(2);cout << a3;	
	    			//////// 4
	    			A4:
	    			gotoxy(41,17);foreColor(3);cout << "4) Where ________________(you/get off) the train?"; gotoxy(50,17);foreColor(3);inputLetter(a4);fflush(stdin);cin.clear();
	    			if(a4=="did you get off")
	    			{
	    				aa4 = 1;
	    				gotoxy(41,17);foreColor(2);cout << "4) Where                 (you/get off) the train?"; gotoxy(50,17);foreColor(2);cout << a4;
						/////5
						A5:
						gotoxy(41,19);foreColor(3);cout << "5) I ______________ (not/change) trains at Victoria."; gotoxy(46,19);foreColor(3);getline(cin,a5);fflush(stdin);cin.clear();
						if(a5=="did not change" || a5=="didn't change")
						{
							aa5 = 1;
							gotoxy(41,19);foreColor(2);cout << "5) I                (not/change) trains at Victoria."; gotoxy(46,19);foreColor(2);cout << a5;
							///////6
							A6:
							gotoxy(41,21);foreColor(3);cout << "6) They _____ (live) in Paris.";gotoxy(49,21);foreColor(3);inputLetter(a6);fflush(stdin);cin.clear();
							if(a6== "lived")
							{
								aa6 = 1;
								gotoxy(41,21);foreColor(2);cout << "6) They       (live) in Paris.";gotoxy(49,21);foreColor(2);cout << a6;
								//////7
								A7:
								gotoxy(41,23);foreColor(3);cout << "7) She ____ (read) the newspaper yesterday.";gotoxy(48,23);foreColor(3); inputLetter(a7);fflush(stdin);cin.clear();
								if(a7=="read")
								{
									aa7 = 1;
									gotoxy(41,23);foreColor(2);cout << "7) She      (read) the newspaper yesterday.";gotoxy(48,23);foreColor(2);cout << a7;
									//////8
									A8:
									gotoxy(41,25);foreColor(3);cout << "8) ____________ (I/forget) something?";gotoxy(44,25);foreColor(3);inputLetter(a8);fflush(stdin);cin.clear();
									if(a8=="Did I forget")
									{
										aa8 = 1;
										gotoxy(41,25);foreColor(2);cout << "8)              (I/forget) something?";gotoxy(44,25);foreColor(2);cout << a8;
										//////////9
										A9:
										gotoxy(41,27);foreColor(3);cout << "9) He ___ (have) a shower.";gotoxy(47,27);foreColor(3);inputLetter(a9);fflush(stdin);cin.clear();
										if(a9=="had")
										{
											aa9 = 1;
											gotoxy(41,27);foreColor(2);cout << "9) He     (have) a shower.";gotoxy(47,27);foreColor(2);cout << a9;
											//////10
											A10:
											gotoxy(41,29);foreColor(3);cout << "10) We ____ (be) very lucky with the weather."; gotoxy(48,29);foreColor(3);inputLetter(a10);fflush(stdin);cin.clear();
											if(a10=="were")
											{
												aa10 = 1;
										 		gotoxy(41,29);foreColor(2);cout << "10) We      (be) very lucky with the weather."; gotoxy(48,29);foreColor(2);cout << a10;
										 		//////11
										 		A11:
										 		gotoxy(41,31);foreColor(3);cout << "11) But we (see) ___ some beautiful rainbows.";gotoxy(58,31);foreColor(3);inputLetter(a11);fflush(stdin);cin.clear();
										 		if(a11=="saw")
										 	   {
										 			aa11 = 1;
										 		    gotoxy(41,31);foreColor(2);cout << "11) But we (see)     some beautiful rainbows.";gotoxy(58,31);foreColor(2);cout << a11;
													/////////////12
													A12:
													gotoxy(41,33);foreColor(3);cout << "12) Last year I _____ (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(3);inputLetter(a12);fflush(stdin);cin.clear();
													if(a12=="spent")
													{
														aa12 = 1;
														gotoxy(41,33);foreColor(2);cout << "12) Last year I       (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(2);cout << a12;	
														//////// 13	
														A13:						
														gotoxy(41,35);foreColor(3);cout << "13) I ______ (work) in a bank for ten years.";gotoxy(47,35);foreColor(3);inputLetter(a13);fflush(stdin);cin.clear();
														if(a13=="worked")
														{
															aa13 = 1;
															gotoxy(41,35);foreColor(2);cout << "13) I        (work) in a bank for ten years.";gotoxy(47,35);foreColor(2);cout << a13;
															/////////// 14
															A14:
															gotoxy(41,37);foreColor(3);cout << "14) He ________ (travel) through the middle east last year.";gotoxy(48,37);foreColor(3);inputLetter(a14);fflush(stdin);cin.clear();
															if(a14=="traveled" || a14=="travelled")
															{
																aa14 = 1;
																gotoxy(41,37);foreColor(2);cout << "14) He          (travel) through the middle east last year.";gotoxy(48,37);foreColor(2);cout << a14;
																//////////15
																A15:
																gotoxy(41,39);foreColor(3);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(3);inputLetter(a15);fflush(stdin);cin.clear();
																if(a15=="bought")
																{
																	aa15 = 1;
																	gotoxy(41,39);foreColor(2);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(2);cout << a15;
																	///////16
																	A16:
																	gotoxy(41,41);foreColor(3);cout << "16) I ______ (cook) steak last night."; gotoxy(47,41);foreColor(3);inputLetter(a16);fflush(stdin);cin.clear();
																	if(a16=="cooked")
																	{
																	
																		aa16 = 1;													
																		gotoxy(41,41);foreColor(2);cout << "16) I        (cook) steak last night."; gotoxy(47,41);foreColor(2);cout << a16;
																		A17:												
																		aaa = aa1+aa2+aa3+aa4+aa5+aa6+aa7+aa8+aa9+aa10+aa11+aa12+aa13+aa14+aa15+aa16;
																		system("cls");
																		Congratulations();
																		if(aaa>=16)
																		{
																			gotoxy(35+34+11,25);cout << "Coupon: A168";
																	    	gotoxy(36+34+8,28);cout<< aaa << "/16 Excellent!";
																	    	gotoxy(35+34+11,14);cout << "100% Discount";
																		}
																		else
																		{
																			gotoxy(35+34+11,25);cout << "Coupon: AA168";
																	    	gotoxy(36+34+8,28);cout<< aaa << "/16 Good job!!";
																	    	gotoxy(35+34+11,14);cout << "50% Discount";
																		}													    
																	    gotoxy(22+34+11,38);foreColor(0);cout << "REDO GRAMMAR PRESS ENTER, ESC MENU!!!";
																	    DrawRectangle(23+34+13,13,30,1,4);
																	    //getch();
																	}
																	else
																	{
																		aa16 = 0;
																		gotoxy(41,41);foreColor(4);cout << "16) I        (cook) steak last night."; gotoxy(47,41);foreColor(4);cout << a16;
																		getch();
																		goto A17;	
																	}
																}	
																else
																{
																	aa15 = 0;
																	gotoxy(41,39);foreColor(4);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(4);cout << a15;
																	getch();
																	goto A16;	
																}
															}
															else
															{
																aa14 = 0;
																gotoxy(41,37);foreColor(4);cout << "14) He          (travel) through the middle east last year.";gotoxy(48,37);foreColor(4);cout << a14;
																getch();
																goto A15;		
															}
														}
														else
														{
															aa13 = 0;
															gotoxy(41,35);foreColor(4);cout << "13) I        (work) in a bank for ten years.";gotoxy(47,35);foreColor(4);cout << a13;
															getch();
															goto A14;	
														}									
													}
													else
													{
														aa12 = 0;
														gotoxy(41,33);foreColor(4);cout << "12) Last year I       (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(4);cout << a12;
														getch();
														goto A13;	
													}									
											   }
											   else
											   {
											   		aa11 = 0;
											   		gotoxy(41,31);foreColor(4);cout << "11) But we (see)     some beautiful rainbows.";gotoxy(58,31);foreColor(4);cout << a11;
											   		getch();
													goto A12;
											   }
											}
											else
											{
												aa10 = 0;
												gotoxy(41,29);foreColor(4);cout << "10) We      (be) very lucky with the weather."; gotoxy(48,29);foreColor(4);cout << a10;
												getch();
												goto A11;
											}
										}
										else
										{
											aa9 = 0;
											gotoxy(41,27);foreColor(4);cout << "9) He     (have) a shower.";gotoxy(47,27);foreColor(4);cout << a9;	
											getch();
											goto A10;
										}
									}
									else
									{
										aa8 = 0;
										gotoxy(41,25);foreColor(4);cout << "8)              (I/forget) something?";gotoxy(44,25);foreColor(4);cout << a8;
										getch();
										goto A9;
									}
								}
								else
								{
									aa7 = 0;
									gotoxy(41,23);foreColor(4);cout << "7) She      (read) the newspaper yesterday.";gotoxy(48,23);foreColor(4);cout << a7;
									getch();
									goto A8;
								}
							}
							else
							{
								aa6 = 0;
								gotoxy(41,21);foreColor(4);cout << "6) They       (live) in Paris.";gotoxy(49,21);foreColor(4);cout << a6;
								getch();
								goto A7;
							}
						}
						else
						{
							aa5 = 0;
							gotoxy(41,19);foreColor(4);cout << "5) I                (not/change) trains at Victoria."; gotoxy(46,19);foreColor(4);cout << a5;
							getch();
							goto A6;
						}
						
					}
					else
					{
						aa4 = 0;
						gotoxy(41,17);foreColor(4);cout << "4) Where                 (you/get off) the train?"; gotoxy(50,17);foreColor(4);cout << a4;
						getch();
						goto A5;
					}
				}
				else
				{
					aa3 = 0;
					gotoxy(41,13+2);foreColor(4);cout << "3) What time               (he/get up) yesterday?";gotoxy(54,13+2);foreColor(4);cout << a3;
					getch();
					goto A4;
				}
			}
			else
			{
				aa2 = 0;
				gotoxy(41,12+1);foreColor(4);cout << "2) She        (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(4);cout << a2;
				getch();
				goto A3;
			}	
		}
		else
		{
			aa1 = 0;
			gotoxy(41,11);foreColor(4);cout << "1) I               (not/drink) any beer last night."; gotoxy(46,11);foreColor(4);cout <<a1;
			getch();
			goto A2;
		}      
	}
	void FPresentPerfect()
	{
		PresentPerfect:
		GoodLuck();
		// title
		gotoxy(68+16,6-3);EPN("PRSENT PERFECT");
		gotoxy(63,7);foreColor(4);cout << "Please read the instructions before you start.";
		//gotoxy(45,9);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
		gotoxy(44,11);foreColor(3);cout << "1. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
		gotoxy(58,13);foreColor(3);cout << "2. After finishing, you will get a coupon for your order!";
		string b1, b2, b3, b4, b5, b6, b7, b8;
		int  bb1, bb2, bb3, bb4, bb5, bb6, bbb;
		//////1
	
	    gotoxy(58,11+8);foreColor(3);cout << "1) ________________________ (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(3);getline(cin,b1);fflush(stdin);cin.clear();
	    if(b1=="Has she passed the exam?")			 
	    {
	    	bb1 = 1;
	    	gotoxy(58,11+8);foreColor(2);cout << "1)                          (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(2);cout << b1;
	    	//////////2
	    	B2:
	    	gotoxy(58,14+8);foreColor(3);cout << "2) _________________________  (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(3);getline(cin, b2);fflush(stdin);cin.clear();
	    	if(b2=="Have you eaten lunch yet?")     
	    	{
	    		bb2 = 1;
	    		gotoxy(58,14+8);foreColor(2);cout << "2)                            (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(2);cout << b2;
	    		//////3
	    		B3:
	    		gotoxy(58,17+8);foreColor(3);cout << "3) ____________________ (where / you / be)?";gotoxy(58+3,17+8);foreColor(3);getline(cin, b3);fflush(stdin);cin.clear();
	    		if(b3=="Where have you been?")
	    		{
	    			bb3 = 1;
	    			gotoxy(58,17+8);foreColor(2);cout << "3)                      (where / you / be)?";gotoxy(58+3,17+8);foreColor(2);cout << b3;
	    			//////4
	    			B4:
	    			gotoxy(58,20+8);foreColor(3);cout << "4) ___________________________________ (you / never / study French)";gotoxy(58+3,20+8);foreColor(3);getline(cin, b4);fflush(stdin);cin.clear();
	    			if(b4=="You have never studied French.")
	    			{
	    				bb4 = 1;
	    				gotoxy(58,20+8);foreColor(2);cout << "4)                                     (you / never / study French)";gotoxy(58+3,20+8);foreColor(2);cout << b4;
	    				/////////////5
	    				B5:
	    				gotoxy(58,23+8);foreColor(3);cout << "5) __________________________ (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(3);getline(cin, b5);fflush(stdin);cin.clear();
	    				if(b5=="We have not gone to Paris." || b5=="We haven't gone to Paris.")
	    				{
	    					bb5 = 1;
	    					gotoxy(58,23+8);foreColor(2);cout << "5)                            (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(2);cout << b5;
	    					/////////6
	    					B6:
	    					gotoxy(58,26+8);foreColor(3);cout << "6) _________________________ (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(3);getline(cin,b6);fflush(stdin);cin.clear();
	    					if(b6=="He has not met my mother." || b6=="He hasn't met my mother.")
	    					{	bb6 = 1;
	    						gotoxy(58,26+8);foreColor(2);cout << "6)                           (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(2);cout << b6;
	    						B7:
	    					
	    						bbb = bb1 + bb2 + bb3 + bb4 + bb5 + bb6;
	    						system("cls");
	    						Congratulations();
								if(bbb>=6)
	    						{
	    							gotoxy(35+34+11,25);cout << "Coupon: B168";
									gotoxy(36+34+8+1,28);cout<< bbb << "/6 Excellent!";
									gotoxy(35+34+11,14);cout << "100% Discount";
								}
								else
								{
									gotoxy(35+34+11,25);cout << "Coupon: BB168";
									gotoxy(36+34+8+1,28);cout<< bbb << "/6 Good job!!";
									gotoxy(35+34+11,14);cout << "50% Discount";
								}
							    gotoxy(22+34+11,38);foreColor(0);cout << "REDO GRAMMAR PRESS ENTER, ESC MENU!!!";
							    DrawRectangle(23+34+13,13,30,1,4);
								//getch();
							}
							else
							{
								bb6 = 0;
								gotoxy(58,26+8);foreColor(4);cout << "6)                           (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(4);cout << b6;
								getch();
								goto B7;
							}
						}
						else
						{
							bb5 = 0;
							gotoxy(58,23+8);foreColor(4);cout << "5)                            (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(4);cout << b5;
							getch();
							goto B6;
						}
					}
					else
					{
						bb4 = 0;
						gotoxy(58,20+8);foreColor(4);cout << "4)                                     (you / never / study French)";gotoxy(58+3,20+8);foreColor(4);cout << b4;
						getch();								
						goto B5;
					}
	    			
				}
				else
				{
					bb3 = 0;
					gotoxy(58,17+8);foreColor(4);cout << "3)                      (where / you / be)?";gotoxy(58+3,17+8);foreColor(4);cout << b3;
					getch();
					goto B4;
				}
			}
			else	
			{
				bb2 = 0;
				gotoxy(58,14+8);foreColor(4);cout << "2)                            (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(4);cout << b2;
				getch();
				goto B3;
			}
		}
		else
		{
			bb1 = 0;
			gotoxy(58,11+8);foreColor(4);cout << "1)                          (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(4);cout << b1;
			getch();
			goto B2;
		}									
	}
	void FFutureSimple()
	{
		FutureSimple:
		GoodLuck();
		// title
		gotoxy(68+15,6-3);EPN("FUTURE SIMPLE");	
		gotoxy(63,7);foreColor(4);cout << "Please read the instructions before you start.";
		//gotoxy(45,9);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
		gotoxy(44,11);foreColor(3);cout << "1. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
		gotoxy(58,13);foreColor(3);cout << "2. After finishing, you will get a coupon for your order!";
		string d1, d2, d3, d4, d5, d6;
		int dd1, dd2, dd3, dd4, dd5, dd6, ddd;
	    //////////////1
	 
	    gotoxy(45,19);foreColor(3);cout << "1) Joan thinks the Conservatives ________ (win) the next election."; gotoxy(45+33,19);foreColor(3);getline(cin,d1);fflush(stdin);cin.clear();
	    if(d1=="will win")
	    {
	    	dd1 = 1;
	    	gotoxy(45,19);foreColor(2);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(2);cout << d1;
	    	//////////////2
	    	D2:
	    	gotoxy(45,22);foreColor(3);cout << "2) If she passes the exam, she _______ (be) very happy.";gotoxy(45+31,22);foreColor(3);getline(cin, d2);fflush(stdin);cin.clear();
	    	if(d2=="will be")
	    	{
	    		dd2 = 1;
	    		gotoxy(45,22);foreColor(2);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(2);cout << d2;
	    		//////////3
	    		D3:
	    		gotoxy(45,25);foreColor(3);cout << "3) A: I'm cold. B: I ____________ (turn on) the fire.";gotoxy(45+21,25);foreColor(3);getline(cin,d3);fflush(stdin);cin.clear();
	    		if(d3=="will turn on")
	    		{
	    			dd3 = 1;
	    			gotoxy(45,25);foreColor(2);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(2);cout << d3;
	    			///////////4
	    			D4:
	    			gotoxy(45,28);foreColor(3);cout << "4) The meeting _________ (take) place at 6pm.";gotoxy(45+15,28);foreColor(3);getline(cin,d4);fflush(stdin);cin.clear();
	    			if(d4=="will take")
	    			{
	    				dd4 = 1;
	    				gotoxy(45,28);foreColor(2);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(2);cout << d4;
	    				///////5
	    				D5:
	    				gotoxy(45,31);foreColor(3);cout << "5) They _______ (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(3);getline(cin, d5);fflush(stdin);cin.clear();
	    				if(d5=="will be")
	    				{
	    					dd5 = 1;
	    					gotoxy(45,31);foreColor(2);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(2);cout << d5;
	    					/////// 6
	    					D6:
	    					gotoxy(45,34);foreColor(3);cout << "6) ____________ (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);getline(cin, d6);fflush(stdin);cin.clear();
	    					if(d6=="Will she get")
	    					{
	    						dd6 = 1;
	    						gotoxy(45,34);foreColor(3);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);cout << d6;
	    						D7:
	    						ddd = dd1 + dd2 + dd3 + dd4 + dd5 + dd6;
	    						system("cls");
	    						Congratulations();
	    						if(ddd>=6)
	    						{
	    							gotoxy(35+34+11,25);cout << "Coupon: C168";
									gotoxy(36+34+8+1,28);cout<< ddd << "/6 Excellent!";
									gotoxy(35+34+11,14);cout << "100% Discount";
								}
								else
								{
									gotoxy(35+34+11,25);cout << "Coupon: CC168";
									gotoxy(36+34+8+1,28);cout << ddd << "/6 Good job!!";
									gotoxy(35+34+11,14);cout << "50% Discount";
								}
							
								gotoxy(22+34+11,38);foreColor(0);cout << "REDO GRAMMAR PRESS ENTER, ESC MENU!!!";
							    DrawRectangle(23+34+13,13,30,1,4);
								//getch();								
							}
							else
							{
								dd6 = 0;
								gotoxy(45,34);foreColor(4);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(4);cout << d6;
								getch();
								goto D7;
							}
						}
						else
						{
							dd5 = 0;
							gotoxy(45,31);foreColor(4);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(4);cout << d5;
							getch();
							goto D6;
						}
	    				
					}
					else
					{
						dd4 = 0;
						gotoxy(45,28);foreColor(4);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(4);cout << d4;
						getch();
						goto D5;
					}
				}
				else
				{
					dd3 = 0;
					gotoxy(45,25);foreColor(4);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(4);cout << d3;
					getch();
					goto D4;
				}
			}	
			else
			{
				dd2 = 0;
				gotoxy(45,22);foreColor(4);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(4);cout << d2;
				getch();
				goto D3;
			}
		}
		else
		{
			dd1 = 0;
			gotoxy(45,19);foreColor(4);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(4);cout << d1;
			getch();
			goto D2;
		}
	}
	void FPresentSimple()
	{
		PresentSimple:
		GoodLuck();
		// title
		gotoxy(68+18,6-3);EPN("PRSENT SIMPLE");
		gotoxy(63,7);foreColor(4);cout << "Please read the instructions before you start.";
		//gotoxy(45,9);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
		gotoxy(44,11);foreColor(3);cout << "1. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
		gotoxy(58,13);foreColor(3);cout << "2. After finishing, you will get a coupon for your order!";
		string c1, c2, c3, c4, c5, c6;
		int cc1, cc2, cc3, cc4, cc5, cc6, ccc;
		//////1
		
	    gotoxy(45,11+8);foreColor(3);cout << "1) __________________________  (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(3);getline(cin,c1);fflush(stdin);cin.clear();
	    if(c1=="He drives to work every day.")
	    {
	    	cc1 = 1;
	    	gotoxy(45,11+8);foreColor(2);cout << "1)                             (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(2);cout << c1;
	    	/////////2
	    	C2:
	    	gotoxy(45,22);foreColor(3);cout << "2) _____________________________ (I / not / think you are right)";gotoxy(45+3,22);foreColor(3);getline(cin,c2);fflush(stdin);cin.clear();
	    	if(c2=="I do not think you are right." || c2=="I don't think you are right.")
	    	{
	    		cc2 = 1;
	    		gotoxy(45,22);foreColor(2);cout << "2)                               (I / not / think you are right)";gotoxy(45+3,22);foreColor(2);cout << c2;
	    		/////3
	    		C3:
	    		gotoxy(45,25);foreColor(3);cout << "3) _______________________________ (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(3);getline(cin, c3);fflush(stdin);cin.clear();
	    		if(c3=="He does not read the newspaper." || c3=="He doesn't read the newspaper.")
	    		{
	    			cc3 = 1;
	    			gotoxy(45,25);foreColor(2);cout << "3)                                 (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(2);cout << c3;
	    			////////////4
	    			C4:
	    			gotoxy(45,28);foreColor(3);cout << "4) ___________________________ (how / he / travel to work)?";gotoxy(45+3,28);foreColor(3);getline(cin, c4);fflush(stdin);cin.clear();
	    			if(c4=="How does he travel to work?")
	    			{
	    				cc4 = 1;
	    				gotoxy(45,28);foreColor(2);cout << "4)                             (how / he / travel to work)?";gotoxy(45+3,28);foreColor(2);cout << c4;
	    				/////5
	    				C5:
	    				gotoxy(45,31);foreColor(3);cout << "5) ________________________________ (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(3);getline(cin, c5);fflush(stdin);cin.clear();
	    				if(c5=="She catches a cold every winter.")
	    				{
	    					cc5 = 1;
	    					gotoxy(45,31);foreColor(2);cout << "5)                                  (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(2);cout << c5;	
	    					////////
	    					C6:
	    					gotoxy(45,34);foreColor(3);cout << "6) ______________________ (we / take the bus often)";gotoxy(48,34);foreColor(3);getline(cin, c6);fflush(stdin);cin.clear();
	    					if(c6=="We take the bus often.")
	    					{
	    						cc6 = 1;
	    						gotoxy(45,34);foreColor(2);cout << "6)                        (we / take the bus often)";gotoxy(48,34);foreColor(2);cout << c6;
	    						C7:
	    						ccc = cc1 + cc2 + cc3 + cc4 + cc5 + cc6;
	    						system("cls");
	    						Congratulations();
	    						if(ccc>=6)
	    						{
	    							gotoxy(35+34+11,25);cout << "Coupon: D168";
									gotoxy(36+34+8+1,28);cout << ccc << "/6 Excellent!";
								    gotoxy(35+34+11,14);cout << "100% Discount";
								}
								else
								{
									gotoxy(35+34+11,25);cout << "Coupon: DD168";
									gotoxy(36+34+8+1,28);cout << ccc << "/6 Good job!!";
								    gotoxy(35+34+11,14);cout << "50% Discount";
								}
								gotoxy(22+34+11,38);foreColor(0);cout << "REDO GRAMMAR PRESS ENTER, ESC MENU!!!";
							    DrawRectangle(23+34+13,13,30,1,4);
								//getch();
								
							}
							else
							{
								cc6 = 0;
								gotoxy(45,34);foreColor(4);cout << "6)                        (we / take the bus often)";gotoxy(48,34);foreColor(4);cout << c6;
								getch();
								goto C7;
							}
						}					                 
						else
						{
							cc5 = 0;
							gotoxy(45,31);foreColor(4);cout << "5)                                  (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(4);cout << c5;
							getch();
							goto C6;
						}									
					}
					else
					{
						cc4 = 0;
						gotoxy(45,28);foreColor(4);cout << "4)                             (how / he / travel to work)?";gotoxy(45+3,28);foreColor(4);cout << c4;
						getch();
						goto C5;
					}
				}
				else
				{
					cc3 = 0;
					gotoxy(45,25);foreColor(4);cout << "3)                                 (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(4);cout << c3;
					getch();
					goto C4;
				}
			}
			else
			{
				cc2 = 0;
				gotoxy(45,22);foreColor(4);cout << "2)                               (I / not / think you are right)";gotoxy(45+3,22);foreColor(4);cout << c2;
				getch();
				goto C3;
			}
		}
		else
		{
			cc1 = 0;
			gotoxy(45,11+8);foreColor(4);cout << "1)                             (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(4);cout << c1;
			getch();
			goto C2;
		}
	}	
};
grammarclass gr;
fstream FileG;
void FuInsert()
{
	gr.InsertBox();
	gr.InputD();
	FileG.open("FutureFile1.bin", ios::out | ios::app);
	gr.InputFuture();
	FileG.write((char*)&gr, sizeof(gr));
	FileG.close();
}
void PaInsert()
{
	gr.InsertBox();
	gr.InputD();
	FileG.open("PastFile1.bin", ios::out | ios::app);
	gr.InputPast();
	FileG.write((char*)&gr, sizeof(gr));
	FileG.close();
}
void PerInsert()
{
	gr.InsertBox();
	gr.InputD();
	FileG.open("PerfectFile1.bin", ios::out | ios::app);
	gr.InputPerfect();
	FileG.write((char*)&gr, sizeof(gr));
	FileG.close();
}
void SiInsert()
{
	gr.InsertBox();
	gr.InputD();
	FileG.open("SimpleFile1.bin", ios::out | ios::app);
	gr.InputPresent();
	FileG.write((char*)&gr, sizeof(gr));
	FileG.close();
}
////// OutPut
void FuOutput()
{
	gr.InforGBoxView();
	FileG.open("FutureFile1.bin", ios::in);
	if(FileG.bad())
	{
		cls();
		cout << "File not Found!!!";
	}
	FileG.read((char*)&gr, sizeof(gr));
	while(!FileG.eof())
	{
		gr.OutInforFu();
		FileG.read((char*)&gr, sizeof(gr));
	}
	FileG.close();
}
void SiOutput()
{
	gr.InforGBoxView();
	FileG.open("SimpleFile1.bin", ios::in);
	if(FileG.bad())
	{
		cls();
		cout << "File not Found!!!";
	}
	FileG.read((char*)&gr, sizeof(gr));
	while(!FileG.eof())
	{
		gr.OutInforSi();
		FileG.read((char*)&gr, sizeof(gr));
	}
	FileG.close();
}
void PerOutput()
{
	gr.InforGBoxView();
	FileG.open("PerfectFile1.bin", ios::in);
	if(FileG.bad())
	{
		cls();
		cout << "File not Found!!!";
	}
	FileG.read((char*)&gr, sizeof(gr));
	while(!FileG.eof())
	{
		gr.OutInforPer();
		FileG.read((char*)&gr, sizeof(gr));
	}
	FileG.close();
}
void PaOutput()
{
	gr.InforGBoxView();
	FileG.open("PastFile1.bin", ios::in);
	if(FileG.bad())
	{
		cls();
		cout << "File not Found!!!";
	}
	FileG.read((char*)&gr, sizeof(gr));
	while(!FileG.eof())
	{
		gr.OutInforPa();
		FileG.read((char*)&gr, sizeof(gr));
	}
	FileG.close();
}
void BoxLogin()
{
	DrawRectangle(50+15,23-8,5,19+3,6);delay(50);// yellow biglongbox leftside
	DrawRectangle(87+15,23-8,5,19+3,6);delay(50);// yellow biglongbox rightside
    DrawRectangle(46+15,24-8,2,17+3,8);delay(50);//propheh leftside
    DrawRectangle(94+15,24-8,2,17+3,8);delay(50);//propheh rightside
	DrawRectangle(43+15,25-8,2,15+3,9);delay(50);//blue leftsi
	DrawRectangle(97+15,25-8,2,15+3,9);delay(50);//blue rightside
	drawBoxSingleLineWithBG(41+15,26-8,1,13+3,10);delay(50);//green box left side
	drawBoxSingleLineWithBG(100+15,26-8,1,13+3,10);delay(50);//green box right side
	drawBoxSingleLineWithBG(58+15,23-7,26,1,9);delay(50);//blue on top
	DrawRectangle(58+15,35-8,26,1,9);
	DrawRectangle(59+15,37-8,24,0,8);
	DrawRectangle(60+15,38-8,22,0,6);
	DrawRectangle(61+15,39-8,20,0,10);
	DrawRectangle(58+15,27-8,26,6,6);delay(100);
}
void LoginTitle()
{
	gotoxy(24,10-5);foreColor(4);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";
	gotoxy(24,11-5);foreColor(4);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
	gotoxy(24,12-5);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
	gotoxy(24,13-5);foreColor(4);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
	gotoxy(24,14-5);foreColor(4);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
	gotoxy(24,15-5);foreColor(4);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
	gotoxy(24,16-5);foreColor(4);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
	gotoxy(24,17-5);foreColor(4);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
    gotoxy(24,18-5);foreColor(4);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
	
}
void LoginTitle1()
{
	gotoxy(24,10);foreColor(13);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";delay(100);
    gotoxy(24,11);foreColor(2);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";delay(100);
    gotoxy(24,12);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";delay(100);
    gotoxy(24,13);foreColor(5);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";delay(100);
    gotoxy(24,14);foreColor(6);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";delay(100);
    gotoxy(24,15);foreColor(7);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";delay(100);
    gotoxy(24,16);foreColor(13);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";delay(100);
    gotoxy(24,17);foreColor(9);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";delay(100);
    gotoxy(24,18);foreColor(10);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";delay(100);
}
void RegisterTitle()
{
	gotoxy(12,10-5);foreColor(13);cout<< ".-------.        .-''-.    .-_'''-.  .-./`)    .-'''-. ,---------.    .-''-.  .-------.            .---.  .---.     .-''-.  .-------.        .-''-.   ";delay(100);
    gotoxy(12,11-5);foreColor(2);cout << "|  _ _   \\     .'_ _   \\  '_( )_   \\ \\ .-.')  / _     \\\\          \\ .'_ _   \\ |  _ _   \\           |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";delay(100);
    gotoxy(12,12-5);foreColor(4);cout << "| ( ' )  |    / ( ` )   '|(_ o _)|  '/ `-' \\ (`' )/`--' `--.  ,---'/ ( ` )   '| ( ' )  |           |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";delay(100);
    gotoxy(12,13-5);foreColor(5);cout << "|(_ o _) /   . (_ o _)  |. (_,_)/___| `-'```(_ o _).       |   \\  . (_ o _)  ||(_ o _) /           |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";delay(100);
    gotoxy(12,14-5);foreColor(6);cout << "| (_,_).' __ |  (_,_)___||  |  .-----..---.  (_,_). '.     :_ _:  |  (_,_)___|| (_,_).' __         |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";delay(100);
    gotoxy(12,15-5);foreColor(7);cout << "|  |\\ \\  |  |'  \\   .---.'  \\  '-   .'|   | .---.  \\  :    (_I_)  '  \\   .---.|  |\\ \\  |  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";delay(100);
    gotoxy(12,16-5);foreColor(13);cout<< "|  | \\ `'   / \\  `-'    / \\  `-'`   | |   | \\    `-'  |   (_(=)_)  \\  `-'    /|  | \\ `'   /        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";delay(100);
    gotoxy(12,17-5);foreColor(9);cout << "|  |  \\    /   \\       /   \\        / |   |  \\       /     (_I_)    \\       / |  |  \\    /         (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";delay(100);
    gotoxy(12,18-5);foreColor(10);cout<< "''-'   `'-'     `'-..-'     `'-...-'  '---'   `-...-'      '---'     `'-..-'  ''-'   `'-'          '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";delay(100);
		
}
void DRegister_Login()
{
   	 gotoxy(27+18,4-4+3);foreColor(2);cout << "  _____            _     _                           _                 _       ";delay(100);
     gotoxy(27+18,5-4+3);foreColor(3);cout << " |  __ \\          (_)   | |                         | |               (_)      ";delay(100);
     gotoxy(27+18,6-4+3);foreColor(4);cout << " | |__) |___  __ _ _ ___| |_ ___ _ __    ___  _ __  | |     ___   __ _ _ _ __  ";delay(100);
     gotoxy(27+18,7-4+3);foreColor(5);cout << " |  _  // _ \\/ _` | / __| __/ _ \\ '__|  / _ \\| '__| | |    / _ \\ / _` | | '_ \\ ";delay(100);
     gotoxy(27+18,8-4+3);foreColor(6);cout << " | | \\ \\  __/ (_| | \\__ \\ ||  __/ |    | (_) | |    | |___| (_) | (_| | | | | |";delay(100);
     gotoxy(27+18,9-4+3);foreColor(7);cout << " |_|  \\_\\___|\\__, |_|___/\\__\\___|_|     \\___/|_|    |______\\___/ \\__, |_|_| |_|";delay(100);
     gotoxy(27+18,10-4+3);foreColor(9);cout<< "              __/ |                                               __/ |        ";delay(100);
     gotoxy(27+18,11-4+3);foreColor(8);cout<< "             |___/                                               |___/         ";delay(100);
     //drawBoxSingleLineWithBG(20,5,39,25,3);//big box middle
     DrawRectangle(20+34+11,15-8+4,1,20,1);// blue left side
     DrawRectangle(60+34+11,15-8+4,1,20,1);// blue right side
     DrawRectangle(14+34+11,16-8+4,4,0,2);//green left above
     DrawRectangle(63+34+11,16-8+4,4,0,2);// green right above
     DrawRectangle(14+34+11,39-8+4,4,0,2);// green left below
     DrawRectangle(63+34+11,39-8+4,4,0,2);// green right below
     DrawRectangle(12+34+11,16-8+4,0,23,7);// white left
     DrawRectangle(12+34+9,16-7+4,0,23,7);
     DrawRectangle(12+34+7,16-6+4,0,23,7);
     DrawRectangle(69+34+11,16-8+4,0,23,7);// white right
     DrawRectangle(69+34+13,16-7+4,0,23,7);
     DrawRectangle(69+34+15,16-6+4,0,23,7);
     drawBoxSingleLineWithBG(20+34+11,42-11+4,41,1,7);//blue  below
     drawBoxSingleLineWithBG(21+34+11,43-11+4,39,1,9);// blue  below
     drawBoxSingleLineWithBG(22+34+11,44-11+4,37,1,2);//green below
     /////
     DrawRectangle(23+34+11,15,35,1,2);
     DrawRectangle(26+34+11,24,29,1,2);
     DrawRectangle(24+34+11,27,33,1,2);
     gotoxy(35+34+11,25);cout << "1. Register";
     gotoxy(36+33,28);cout << "2.Login as admin, 3.Login as user";
}
void Receipt()
{
	// here is your receipt
     gotoxy(27+11,4-4);foreColor(2);cout << "   _    _                 _____      __     __                _____               _       _   ";delay(50);
     gotoxy(27+11,5-4);foreColor(3);cout << "  | |  | |               |_   _|     \\ \\   / /               |  __ \\             (_)     | |  ";delay(50);
     gotoxy(27+11,6-4);foreColor(4);cout << "  | |__| | ___ _ __ ___    | |  ___   \\ \\_/ /__  _   _ _ __  | |__) |___  ___ ___ _ _ __ | |_ ";delay(50);
     gotoxy(27+11,7-4);foreColor(5);cout << "  |  __  |/ _ \\ '__/ _ \\   | | / __|   \\   / _ \\| | | | '__| |  _  // _ \\/ __/ _ \\ | '_ \\| __|";delay(50);
     gotoxy(27+11,8-4);foreColor(6);cout << "  | |  | |  __/ | |  __/  _| |_\\__ \\    | | (_) | |_| | |    | | \\ \\  __/ (_|  __/ | |_) | |_ ";delay(50);
     gotoxy(27+11,9-4);foreColor(7);cout << "  |_|  |_|\\___|_|  \\___| |_____|___/    |_|\\___/ \\__,_|_|    |_|  \\_\\___|\\___\\___|_| .__/ \\__|";delay(50);
     gotoxy(27+11,10-4);foreColor(8);cout << "                                                                                   | |        ";delay(50);
     gotoxy(27+11,11-4);foreColor(9);cout << "                                                                                   |_|        ";delay(50);
     // thank you so much
     gotoxy(31+11,47-10);foreColor(2);cout << " $$$$$$$$\\ $$\\                           $$\\             $$\\     $$\\                         ";delay(50);
     gotoxy(31+11,48-10);foreColor(2);cout << " \\__$$  __|$$ |                          $$ |            \\$$\\   $$  |                        ";delay(50);
     gotoxy(31+11,49-10);foreColor(2);cout << "    $$ |   $$$$$$$\\   $$$$$$\\  $$$$$$$\\  $$ |  $$\\        \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       ";delay(50);
     gotoxy(31+11,50-10);foreColor(2);cout << "    $$ |   $$  __$$\\  \\____$$\\ $$  __$$\\ $$ | $$  |        \\$$$$  /$$  __$$\\ $$ |  $$ |      ";delay(50);
     gotoxy(31+11,51-10);foreColor(2);cout << "    $$ |   $$ |  $$ | $$$$$$$ |$$ |  $$ |$$$$$$  /          \\$$  / $$ /  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,52-10);foreColor(2);cout << "    $$ |   $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<            $$ |  $$ |  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,53-10);foreColor(2);cout << "    $$ |   $$ |  $$ |\\$$$$$$$ |$$ |  $$ |$$ | \\$$\\           $$ |  \\$$$$$$  |\\$$$$$$  |      ";delay(50);
     gotoxy(31+11,54-10);foreColor(2);cout << "    \\__|   \\__|  \\__| \\_______|\\__|  \\__|\\__|  \\__|          \\__|   \\______/  \\______/       ";delay(50);
     //drawBoxSingleLineWithBG(20,5,39,25,3);//big box middle
     DrawRectangle(20+34+11,15-8,1,20,1);delay(50);// blue left side
     DrawRectangle(60+34+11,15-8,1,20,1);delay(50);// blue right side
     DrawRectangle(14+34+11,16-8,4,0,2);delay(50);//green left above
     DrawRectangle(63+34+11,16-8,4,0,2);delay(50);// green right above
     DrawRectangle(14+34+11,39-8,4,0,2);delay(50);// green left below
     DrawRectangle(63+34+11,39-8,4,0,2);delay(50);// green right below
     DrawRectangle(12+34+11,16-8,0,23,7);delay(50);// white left
     DrawRectangle(12+34+9,16-7,0,23,7);
     DrawRectangle(12+34+7,16-6,0,23,7);
     DrawRectangle(69+34+11,16-8,0,23,7);delay(50);// white right
     DrawRectangle(69+34+13,16-7,0,23,7);
     DrawRectangle(69+34+15,16-6,0,23,7);
     drawBoxSingleLineWithBG(20+34+11,42-11,41,1,7);delay(50);//blue  below
     drawBoxSingleLineWithBG(21+34+11,43-11,39,1,9);delay(50);// blue  below
     drawBoxSingleLineWithBG(22+34+11,44-11,37,1,2);delay(50);//green below
    DrawRectangle(17+52,7,33,1,0);
    gotoxy(22+34+11,34);foreColor(0);cout << "PRESS ENTER FOR ORDER MORE, ESC MENU!";

    gotoxy(17+52,8);foreColor(0);cout << "BARCODE: ";
    //gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,33,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "NAME OF FOOD OR DRINK: ";
    //gotoxy(17+51+8,14);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,15,33,1,0);
    gotoxy(17+52,16);cout << "QUANTITY: ";
    //gotoxy(17+51+16,18);cout << "QUANTITY";
    DrawRectangle(17+52,19,33,1,0);
    gotoxy(17+52,20);cout << "PRICE: ";
    //gotoxy(17+51+17,22);cout << "PRICE";
    DrawRectangle(17+52,23,33,1,0);
    gotoxy(17+52,24);cout << "TOTAL: ";
    //gotoxy(17+51+16,26);cout << "PAYMENT";
    DrawRectangle(17+52,27,33,1,0);
    gotoxy(17+52,28);cout << "PAYMENT: ";
}
void ViewBox()
{
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48-8,5,55,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48-29+25,6,1,4,'\3');delay(50);
    HLine(17+48-29+25,30,1,4,'\4');delay(50);
    HLine(61+48-21+25,6,1,4,'\4');delay(50);
    HLine(61+48-21+25,30,1,4,'\3');delay(50);
  
}
void HeaderViewBox()
{
    gotoxy(54+12-3,3);foreColor(0);cout << "HERE IS THE SPECIAL MENU IN MY SMALL RESTAURANT ";
    foreColor(4);cout << " \3"; 
    gotoxy(17+51-6,7);foreColor(0);cout << left << setw(10) << "BARCODE" << setw(26) << "NAME OF FOOD OR DRINK" << setw(10) << "QUANTITY"  <<"PRICE" <<"\n"<< endl;  
}
void InsertBox()
{
    //  VLine(40+35+13,6,23,8,'|');delay(300);
    DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(50);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(50);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(50);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(50);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(50);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(50);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(50);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48,6,1,4,'\3');delay(50);
    HLine(17+48,30,1,4,'\4');delay(50);
    HLine(61+48,6,1,4,'\4');delay(50);
    HLine(61+48,30,1,4,'\3');delay(50); 
}
void InsertD()
{
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+8,15);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+17,25);cout << "PRICE";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+20,3);EPN("INSERT FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void InfoD()
{
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+14,15);foreColor(0);cout << "YOUR NAME";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "ADDRESS";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+14,25);cout << "PHONE NUMBER";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+23,3);EPN("COMPLETE YOUR IDENTIFY");
    foreColor(4);cout << " \3";    
}
void SearchD()
{
	gotoxy(10+58,9);foreColor(0);cout << "SEARCH FOOD OR DRINK BY BARCODE BELOW!!";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : ";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "NAME OF FOOD OR DRINK: ";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout <<   "QUANTITY  : ";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "PRICE     : ";
    // caption
    gotoxy(54+20,3);EPN("SEARCH FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void OrderD()
{
	gotoxy(10+58,8);foreColor(0);cout << "ORDER FOOD OR DRINK BY BARCODE BELOW!!!";
	DrawRectangle(17+52,11,37,1,0);
	gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    
    gotoxy(17+51+16,15);foreColor(0);cout << "COUPON";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    // caption
    gotoxy(54+20,3);EPN("ORDER FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3"; 
    gotoxy(54+14,25);cout << "IF YOU DON'T HAVE COUPON, JUST SKIP IT!";
}
void DeleteD()
{
	gotoxy(10+58,9);foreColor(0);cout << "DELETE FOOD OR DRINK BY BARCODE BELOW!!";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : ";
    DrawRectangle(17+52,16,37,1,0);
    DrawRectangle(17+52,21,37,1,0);
    DrawRectangle(17+52,26,37,1,0);
    // caption
    gotoxy(54+20,3);EPN("DELETE FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void UpdateD()
{
	gotoxy(10+58,9);foreColor(0);cout << "UPDATE FOOD OR DRINK BY BARCODE BELOW!!";
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+8,15);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+17,25);cout << "PRICE";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+20,3);EPN("UPDATE FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void DesignBigOption()
{
	//Main Option
	char a_=205;
	char b_=205;
    // box leftside on top
    DrawRectangle(20+10,1,1,14,3);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+10,1,1,14,3);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+10,3,1,16,8);delay(50);// black left side
    DrawRectangle(61+10,3,1,16,8);delay(50);// black right side
    DrawRectangle(14+10,4,1,14,9);delay(50);// blue left
    DrawRectangle(63+10,4,1,14,9);delay(50);// blue right
    drawBoxSingleLineWithBG(23+10,1,32,14,3);//big box middle
    drawBoxSingleLineWithBG(15+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+10,1,2,0,9);//small box right side
     // box right on top
    DrawRectangle(20+72+10,1,1,14,3);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+72+10,1,1,14,3);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+72+10,3,1,16,8);delay(50);// black left side
    DrawRectangle(61+72+10,3,1,16,8);delay(50);// black right side
    DrawRectangle(14+72+10,4,1,14,9);delay(50);// blue left
    DrawRectangle(63+72+10,4,1,14,9);delay(50);// blue right
    drawBoxSingleLineWithBG(23+72+10,1,32,14,1);//big box middle
    drawBoxSingleLineWithBG(15+72+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+72+10,1,2,0,9);//small box right side
    // box leftside below
    DrawRectangle(20+36+10,31-6,1,14,4);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+36+10,31-6,1,14,4);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+36+10,33-6,1,16,8);delay(50);// black left side
    DrawRectangle(61+36+10,33-6,1,16,8);delay(50);// black right side
    DrawRectangle(14+36+10,34-6,1,14,4);delay(50);// blue left
    DrawRectangle(63+36+10,34-6,1,14,4);delay(50);// blue right
    drawBoxSingleLineWithBG(23+36+10,31-6,32,14,4);//big box middle
    drawBoxSingleLineWithBG(15+36+10,31-6,2,0,4);//small box left side
    drawBoxSingleLineWithBG(61+36+10,31-6,2,0,4);//small box right side
    // box leftside on top
    gotoxy(28+10,14);foreColor(3);cout << "   1.GRAMMAR EXERCISE \3";delay(50);
    gotoxy(23+10,3);foreColor(3);cout  << "  ______   __    __  ________ ";delay(50);
    gotoxy(23+10,4);foreColor(3);cout  << " /      \\ |  \\  |  \\|        \\";delay(50);
    gotoxy(23+10,5);foreColor(3);cout  << "|  $$$$$$\\| $$\\ | $$| $$$$$$$$";delay(50);
    gotoxy(23+10,6);foreColor(3);cout  << "| $$  | $$| $$$\\| $$| $$__    ";delay(50);
    gotoxy(23+10,7);foreColor(3);cout  << "| $$  | $$| $$$$\\ $$| $$  \\   ";delay(50);
    gotoxy(23+10,8);foreColor(3);cout  << "| $$  | $$| $$\\$$ $$| $$$$$   ";delay(50);
    gotoxy(23+10,9);foreColor(3);cout << "| $$__/ $$| $$ \\$$$$| $$_____ ";delay(50);
    gotoxy(23+10,10);foreColor(3);cout << " \\$$    $$| $$  \\$$$| $$     \\";delay(50);
    gotoxy(23+10,11);foreColor(3);cout << "  \\$$$$$$  \\$$   \\$$ \\$$$$$$$$";delay(50);
    // two
    gotoxy(100+10,13);foreColor(1);cout << "2.ORDER FOOD & DRINK";delay(50);
    gotoxy(97+10,5);foreColor(1);cout  << "######## ##      ##  #######  ";delay(50);
    gotoxy(97+10,6);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,7);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,8);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,9);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,10);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,11);foreColor(1);cout << "   ##     ###  ###   #######  ";delay(50); 
 	//////////
    gotoxy(64+10,34-6);foreColor(4);cout      << "         )  (            ";delay(70);
    gotoxy(64+10,35-6);foreColor(4);cout      << "      ( /(  )\\ )  *   )  ";delay(70);
    gotoxy(64+10,36-6);foreColor(4);cout      << " (    )\\())(()/(` )  /(  ";delay(70);
    gotoxy(64+10,37-6);foreColor(4);cout      << " )\\  ((_)\\  /(_))( )(_)) ";delay(70);
    gotoxy(64+10,38-6);foreColor(4);cout      << "((_) __((_)(_)) (_(_())  ";delay(70);
    gotoxy(64+10,39-6);foreColor(3);cout      << "| __|\\ \\/ /|_ _||_   _|  ";delay(70);
    gotoxy(64+10,40-6);foreColor(3);cout      << "| _|  >  <  | |   | |    ";delay(70);
    gotoxy(64+10,41-6);foreColor(3);cout      << "|___|/_/\\_\\|___|  |_|    ";delay(70);
    gotoxy(71+10,44-6);foreColor(3);cout     << "3.EXIT";delay(70);
    HLine(0,27-6,173,7,b_);
    HLine(0,30-6,173,7,a_);
    gotoxy(59+10,28-6);foreColor(3);cout << "CHOOSE OPTION THAT U WANT BELOW \2";
}
void DesignBigOptionA()
{
	//Main Option
	char a_=205;
	char b_=205;
    // box leftside on top
    DrawRectangle(20+10,1,1,14,3);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+10,1,1,14,3);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+10,3,1,16,8);delay(50);// black left side
    DrawRectangle(61+10,3,1,16,8);delay(50);// black right side
    DrawRectangle(14+10,4,1,14,9);delay(50);// blue left
    DrawRectangle(63+10,4,1,14,9);delay(50);// blue right
    drawBoxSingleLineWithBG(23+10,1,32,14,3);//big box middle
    drawBoxSingleLineWithBG(15+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+10,1,2,0,9);//small box right side
     // box right on top
    DrawRectangle(20+72+10,1,1,14,3);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+72+10,1,1,14,3);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+72+10,3,1,16,8);delay(50);// black left side
    DrawRectangle(61+72+10,3,1,16,8);delay(50);// black right side
    DrawRectangle(14+72+10,4,1,14,9);delay(50);// blue left
    DrawRectangle(63+72+10,4,1,14,9);delay(50);// blue right
    drawBoxSingleLineWithBG(23+72+10,1,32,14,1);//big box middle
    drawBoxSingleLineWithBG(15+72+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+72+10,1,2,0,9);//small box right side
    // box leftside below
    DrawRectangle(20+36+10,31-6,1,14,4);delay(50);// yellow biglongbox leftside
    DrawRectangle(57+36+10,31-6,1,14,4);delay(50);// yellow biglongbox rightside
    DrawRectangle(16+36+10,33-6,1,16,8);delay(50);// black left side
    DrawRectangle(61+36+10,33-6,1,16,8);delay(50);// black right side
    DrawRectangle(14+36+10,34-6,1,14,4);delay(50);// blue left
    DrawRectangle(63+36+10,34-6,1,14,4);delay(50);// blue right
    drawBoxSingleLineWithBG(23+36+10,31-6,32,14,4);//big box middle
    drawBoxSingleLineWithBG(15+36+10,31-6,2,0,4);//small box left side
    drawBoxSingleLineWithBG(61+36+10,31-6,2,0,4);//small box right side
    // box leftside on top
    gotoxy(28+5,14);foreColor(3);cout << "1.VIEW USER INFORMATION(GRAMMAR)";delay(50);
    gotoxy(23+10,3);foreColor(3);cout  << "  ______   __    __  ________ ";delay(50);
    gotoxy(23+10,4);foreColor(3);cout  << " /      \\ |  \\  |  \\|        \\";delay(50);
    gotoxy(23+10,5);foreColor(3);cout  << "|  $$$$$$\\| $$\\ | $$| $$$$$$$$";delay(50);
    gotoxy(23+10,6);foreColor(3);cout  << "| $$  | $$| $$$\\| $$| $$__    ";delay(50);
    gotoxy(23+10,7);foreColor(3);cout  << "| $$  | $$| $$$$\\ $$| $$  \\   ";delay(50);
    gotoxy(23+10,8);foreColor(3);cout  << "| $$  | $$| $$\\$$ $$| $$$$$   ";delay(50);
    gotoxy(23+10,9);foreColor(3);cout << "| $$__/ $$| $$ \\$$$$| $$_____ ";delay(50);
    gotoxy(23+10,10);foreColor(3);cout << " \\$$    $$| $$  \\$$$| $$     \\";delay(50);
    gotoxy(23+10,11);foreColor(3);cout << "  \\$$$$$$  \\$$   \\$$ \\$$$$$$$$";delay(50);
    // two
    gotoxy(100+10,13);foreColor(1);cout << "2.MANAGE FOOD & DRINK";delay(50);
    gotoxy(97+10,5);foreColor(1);cout  << "######## ##      ##  #######  ";delay(50);
    gotoxy(97+10,6);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,7);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,8);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,9);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,10);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(50);
    gotoxy(97+10,11);foreColor(1);cout << "   ##     ###  ###   #######  ";delay(50); 
 	//////////
    gotoxy(64+10,34-6);foreColor(4);cout      << "         )  (            ";delay(70);
    gotoxy(64+10,35-6);foreColor(4);cout      << "      ( /(  )\\ )  *   )  ";delay(70);
    gotoxy(64+10,36-6);foreColor(4);cout      << " (    )\\())(()/(` )  /(  ";delay(70);
    gotoxy(64+10,37-6);foreColor(4);cout      << " )\\  ((_)\\  /(_))( )(_)) ";delay(70);
    gotoxy(64+10,38-6);foreColor(4);cout      << "((_) __((_)(_)) (_(_())  ";delay(70);
    gotoxy(64+10,39-6);foreColor(3);cout      << "| __|\\ \\/ /|_ _||_   _|  ";delay(70);
    gotoxy(64+10,40-6);foreColor(3);cout      << "| _|  >  <  | |   | |    ";delay(70);
    gotoxy(64+10,41-6);foreColor(3);cout      << "|___|/_/\\_\\|___|  |_|    ";delay(70);
    gotoxy(71+10,44-6);foreColor(3);cout     << "3.EXIT";delay(70);
    HLine(0,27-6,173,7,b_);
    HLine(0,30-6,173,7,a_);
    gotoxy(59+10,28-6);foreColor(3);cout << "CHOOSE OPTION THAT U WANT BELOW \2";
}
void GrammarCase()
{
	//GrammarCase
	GrammarCase:
	system("cls");
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(50);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(50);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(50);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(50);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(50);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(50);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(50);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48,6,1,4,'\3');delay(50);
    HLine(17+48,30,1,4,'\4');delay(50);
    HLine(61+48,6,1,4,'\4');delay(50);
    HLine(61+48,30,1,4,'\3');delay(50);							 
    // caption
    gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO DO CHOOSE IT BELOW";
    foreColor(4);cout << " \3"; 
     // box chooose option grammar
   	DrawRectangle(56+13,7,37,2,4);delay(100);							   
    DrawRectangle(58+13,12,33,2,5);delay(100);							   
    DrawRectangle(60+13,17,29,2,6);delay(100);							    
    DrawRectangle(62+13,22,25,2,9);delay(100);							  
    DrawRectangle(64+13,27,21,2,3);delay(100);
    gotoxy(66+12,9) ;foreColor(4);cout << "XXXXXXXXXXXXXXXXXXXX";delay(100);							     
    gotoxy(67+13,14);foreColor(5);cout << "1.PAST SIMPLE";delay(100);							    
    gotoxy(67+13,19);foreColor(6);cout << "2.PRESENT PERFECT";delay(100);							    
    gotoxy(68+13,24);foreColor(9);cout << "3.FUTURE SIMPLE";delay(100);							     
    gotoxy(69+11,29);foreColor(3);cout << "4.PRESENT SIMPLE";delay(100);							    
    gotoxy(16+48,37);foreColor(0);cout << "5.BACK";delay(100);
    gotoxy(57+48,37);foreColor(0);cout << "6.EXIT";delay(100);
}
void FoodCase()
{
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(50);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(50);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(50);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(50);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(50);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(50);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(50);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit 
    HLine(17+48,6,1,4,'\3');delay(50);
    HLine(17+48,30,1,4,'\4');delay(50);
    HLine(61+48,6,1,4,'\4');delay(50);
    HLine(61+48,30,1,4,'\3');delay(50);  
     // caption
    gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO DO CHOOSE IT BELOW";
    foreColor(4);cout << " \3"; 
     // box chooose option grammar
    DrawRectangle(56+13,7,37,2,4);delay(100);  
    DrawRectangle(58+13,12,33,2,5);delay(100);  
    DrawRectangle(60+13,17,29,2,6);delay(100);   
    DrawRectangle(62+13,22,25,2,9);delay(100); 
    DrawRectangle(64+13,27,21,2,3);delay(100);  
    DrawRectangle(66+13,36,17,2,1);delay(100);   
    gotoxy(74,9) ;foreColor(4);cout << "1.VIEW CUSTIOMER INFORMATION";delay(100);    
    gotoxy(70+13,14);foreColor(5);cout << "2.INSERT";delay(100);   
    gotoxy(71+13,19);foreColor(6);cout << "3.DELETE";delay(100);   
    gotoxy(72+13,24);foreColor(9);cout << "4.EDIT";delay(100);    
    gotoxy(69+14,29);foreColor(3);cout << "5.VIEW";delay(100);   
    gotoxy(72+12,38);foreColor(1);cout << "6.SEARCH";delay(100);   
    gotoxy(16+48,37);foreColor(0);cout << "7.BACK";delay(100);
    gotoxy(57+48,37);foreColor(0);cout << "8.EXIT";delay(100);
}
void FoodCaseUser()
{
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(50);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(50);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(50);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(50);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(50);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(50);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(50);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit 
    HLine(17+48,6,1,4,'\3');delay(50);
    HLine(17+48,30,1,4,'\4');delay(50);
    HLine(61+48,6,1,4,'\4');delay(50);
    HLine(61+48,30,1,4,'\3');delay(50);  
     // caption
    gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO DO CHOOSE IT BELOW";
    foreColor(4);cout << " \3"; 
     // box chooose option grammar
    DrawRectangle(56+13,7,37,2,4);delay(100);  
    DrawRectangle(58+13,12,33,2,5);delay(100);  
    DrawRectangle(60+13,17,29,2,6);delay(100);   
    DrawRectangle(62+13,22,25,2,9);delay(100); 
    DrawRectangle(64+13,27,21,2,3);delay(100);  
    DrawRectangle(66+13,36,17,2,1);delay(100);   
    gotoxy(71+13,9) ;foreColor(4);cout << "XXXXXXXX";delay(100);    
    gotoxy(70+13,14);foreColor(5);cout << "XXXXXXXX";delay(100);   
    gotoxy(71+13,19);foreColor(6);cout << "XXXXXXXX";delay(100);   
    gotoxy(72+13,24);foreColor(9);cout << "1.VIEW";delay(100);    
    gotoxy(69+14,29);foreColor(3);cout << "2.SEARCH";delay(100);   
    gotoxy(72+12,38);foreColor(1);cout << "3.Order";delay(100);   
    gotoxy(16+48,37);foreColor(0);cout << "4.BACK";delay(100);
    gotoxy(57+48,37);foreColor(0);cout << "5.EXIT";delay(100);
}
//D stand for Design
class Registerclass{

	public: 
		char rusername[30];
		int rpassword;
		
	void FRegister()
	{
		gotoxy(58+16,21);foreColor(7);cout << "Enter Username:"; cin.getline(rusername, 30);fflush(stdin);cin.clear();
		gotoxy(58+16,23);foreColor(7);cout << "Enter Password:"; cin >> rpassword;fflush(stdin);cin.clear();
	}
	void FOutput()
	{
		cout << "\nUsername : " << rusername;
		cout << "\nPassword : " << rpassword << endl;
	}
	void AdminLogin()
	{
		system("cls");
		int i=3;
		string username,password;
		LoginTitle1();
		system("cls");
	
		while(i>=1)
		{
			LoginTitle();
			BoxLogin();
			gotoxy(58+16,21);foreColor(7);cout << "Enter UserName:";inputLetter(username);fflush(stdin);cin.clear();
			gotoxy(58+16,23);foreColor(7);cout << "Enter Password:";hidePassword(password);fflush(stdin);cin.clear();
			if(username=="vathxmaehg"&&password=="168")
			{
			    gotoxy(77,28);cout << "Login Successed!!!";
			    char a=221;
		    	int j=1;
		    	for(int i=1; i<=26; i++)
		    	{
		    		if(i==14)
		    		{
		    			j=1;
					}
					if(i==26)
					{
						j=1;
					}
					gotoxy(72+i,17);foreColor(j);cout << a;delay(50);
					j++;
				}
				break;
				exit(0);
			}
			else
		 	{  
			    i--;
			    if(i>0)
			    {
					LoginTitle();
					BoxLogin();
			       	gotoxy(78,17);foreColor(7);cout <<"Incorrect Input!\n";	
			      	foreColor(4);gotoxy(60,39);cout << "U have Only "<<i<<" Time Left to Input Please Be Careful!!!";
			       	foreColor(5);gotoxy(76,28);cout <<"Enter to Input Again";  // 47
			       	getch();
			       	system("cls");	
			    }
			    else
			    {
			       for(int i=10;i>=1;i--)
			       {
						LoginTitle();
						BoxLogin();
					    gotoxy(70,39);foreColor(4);cout << "Please Wait "<< i << "s To Input Again!!";delay(50);
			       }
			        system("cls");
			       	AdminLogin();
			    }					
			}
		}
	}	
};

fstream file_re;
Registerclass re;
void Register()
{
	RegisterTitle();
	BoxLogin();
	file_re.open("Register1.bin", ios::out | ios::app);
	if(file_re.bad())
	{
		cout << "Bye bye!";
	}
	re.FRegister();

    char a=221;
	int j=1;
	for(int i=1; i<=26; i++)
	{
		if(i==14)
		{
			j=1;
		}
		if(i==26)
		{
			j=1;
		}
		gotoxy(72+i,17);foreColor(j);cout << a;delay(50);
		j++;
	}
	gotoxy(76,28);cout << "Register Successed!!";
	gotoxy(75,15);foreColor(7);cout << "Press Enter To Login!!";
	getch();
	file_re.write((char*)&re, sizeof(re));
	file_re.close();
}
void View()
{
	file_re.open("Register1.bin", ios::in);
	if(file_re.bad())
	{
		cout << "\nBye worldddd!";
	}
	file_re.read((char*)&re, sizeof(re));
	while(!file_re.eof())
	{
		re.FOutput();
		file_re.read((char*)&re, sizeof(re));	
	}

	file_re.close();
}
/////////////////////////
//food
 class FoodClass{
 	
	public:
		int  barcodef, qtyf, qtyorder, discount;
		char namef[30], nameff[30], address[50], phone[30], coupon[15];
		float pricef, payment, total, dis;
		
		
	void Inputf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> barcodef;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
		gotoxy(54+20,30);foreColor(3);cout << ">>>>>INSERT SUCCESSED<<<<<";
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO INSERT MORE OR ESC FOR BACK!";		
	}
	void OutputSearch()
	{
		gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : " << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "NAME OF FOOD OR DRINK: " << namef;
		gotoxy(17+52,22);foreColor(0);cout << "QUANTITY  : " << qtyf;
		gotoxy(17+52,27);foreColor(0);cout << "PRICE     : " << pricef<< " $";
	}
	void Outputf()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << barcodef << setw(26) << namef << setw(10) << qtyf << pricef<<"$" << "\n" <<endl;
	}
	void OutputOrder()
	{
		total = pricef*qtyorder;
		dis = total - (total*discount)/100;
		payment = total - dis;
	    gotoxy(17+52,8);foreColor(0);cout << "BARCODE: " << barcodef;
	    gotoxy(17+52,12);foreColor(0);cout << "NAME OF FOOD OR DRINK: "	 << namef;
	    gotoxy(17+52,16);cout << "QUANTITY: "<< qtyorder;
	    gotoxy(17+52,20);cout << "PRICE: " << pricef << " $";
	    gotoxy(17+52,24);cout << "TOTAL: "<< total<< " $";
	    gotoxy(17+52,28);cout << "PAYMENT: "<< payment<< " $";
	}
	void InputInfo()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cout << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(nameff, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(address, 50);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(phone, 30);fflush(stdin);cin.clear();
	}
	void HeaderInfo()
	{
		gotoxy(17+51-7,7);foreColor(0);cout << left << setw(15) << "ORDER_BARCODE" << setw(14) << "NAME" << setw(12) << "ADDRESS"  <<"PHONE NUMBER" <<"\n"<< endl;
	}
	void InformationO()
	{
		foreColor(0);cout << "     "<< "\t\t\t\t\t\t\t\t" << left<< setw(12) << barcodef << setw(14) << nameff << setw(12) << address << phone << "\n" << endl;
	}
	void Editf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cout << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
	}
	void Coupon()
	{
    	gotoxy(17+52,17);cout << "ENTER HERE: "; cin.getline(coupon, 15);fflush(stdin);cin.clear();
    	if(strcmp(coupon, "AA168")== 0 || strcmp(coupon, "BB168")== 0 || strcmp(coupon, "CC168")==0 || strcmp(coupon, "DD168")==0)
    	{
    		discount = 50;
		}
		else if(strcmp(coupon, "A168")== 0 || strcmp(coupon, "B168")== 0 || strcmp(coupon, "C168")==0 || strcmp(coupon, "D168")==0)
		{
			discount = 0;
		}
		else
		{
			discount = 100;
		}
	}
 };
fstream file;
FoodClass fc;


void InsertF()
{
	InsertBox();
	InsertD();
	file.open("InsertFood9.bin", ios::out | ios::app);
	fc.Inputf();
	file.write((char*)&fc, sizeof(fc));
	file.close();
}
void ViewF()
{

	ViewBox();
	HeaderViewBox();
	file.open("InsertFood9.bin", ios::in);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD VIEW";
	}
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		fc.Outputf();
		file.read((char*)&fc, sizeof(fc));
	}
	gotoxy(54+12-3,34);foreColor(0);cout << "    PRESS ENTER FOR STAY HERE OR ESC FOR BACK";
	file.close();
}
void SearchF()
{
	InsertBox();
	SearchD();
	bool isfoundf = false;
	int searchf;
	file.open("InsertFood9.bin", ios::in);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD CAN NOT SEARCH!!!";
	}
	gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : "; cin >> searchf;fflush(stdin);cin.clear();
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		if(searchf == fc.barcodef)
		{
			fc.OutputSearch();
			isfoundf = true;
		}
		file.read((char*)&fc, sizeof(fc));
	}
	if(isfoundf == true)
	{
		//gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO SEARCH AGAIN OR ESC FOR BACK";
		gotoxy(64+3,34);foreColor(0);cout << ">>>>>  PRESS ANY KEY TO BACK TO MENU  <<<<<";
		//getch();
	}
	else
	{
		//gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO SEARCH AGAIN!";
		gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO BACK TO MENU!";
		//getch();
		//system("cls");
		file.close();
		//SearchF();
	}
	file.close();
}
fstream backup;


void DeleteF()
{
   
    int deletef;
    bool isdeletef = false;
    
    // Open the files
    file.open("InsertFood9.bin", ios::in | ios::binary);
    backup.open("BackFood.bin", ios::out | ios::binary); // Open in overwrite mode, not append mode.
    
    if (file.bad()) {
        system("cls");
        cout << "\nBYE WORLD CAN NOT DELETE";
        return;
    }

    // Loop for retrying
    while(true)
	{
		InsertBox();
    	DeleteD();
        gotoxy(17 + 52, 12);foreColor(0);cout << "BARCODE   : ";cin >> deletef;fflush(stdin);cin.clear();

        file.read((char*)&fc, sizeof(fc));

        // Process file and check if barcode exists
        while (!file.eof())
		{
            if (deletef == fc.barcodef)
			{
                isdeletef = true;
            }
            if (deletef != fc.barcodef)
			{
                backup.write((char*)&fc, sizeof(fc));
            }
            file.read((char*)&fc, sizeof(fc));
        }
        if (isdeletef)
		{
            gotoxy(54 + 20, 30);foreColor(3);cout << ">>>>>DELETE SUCCESSFUL<<<<<";
			gotoxy(64 + 3, 34);foreColor(0);cout << "PRESS ENTER TO DELETE MORE OR ESC FOR BACK!";
            
            break;
            char choice;
			if(choice == 13)
			{ 
                isdeletef = false;
                backup.close();
                backup.open("BackFood.bin", ios::out | ios::binary);
                file.clear();
                file.seekg(0, ios::beg); 
                continue; 
            }
        }
		else 
		{
            gotoxy(5 + 58, 33);foreColor(4);cout << "BARCODE NOT FOUND, PRESS ANY KEY TO DELETE AGAIN!";
            getch();
            system("cls");
            
            
            file.close();
            backup.close();
            file.open("InsertFood9.bin", ios::in | ios::binary);
            backup.open("BackFood.bin", ios::out | ios::binary); 
        }
    }

   
    file.close();
    backup.close();
    
  
    remove("InsertFood9.bin");
    rename("BackFood.bin", "InsertFood9.bin");
}


void UpdateF()
{

	bool isupdatef = false;
	int updatef;
	file.open("InsertFood9.bin", ios::in | ios::out | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD CAN NOT UPDATE";
	}
	while(true)
	{
		InsertBox();
		UpdateD();
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> updatef;fflush(stdin);cin.clear();
		file.read((char*)&fc, sizeof(fc));
		while(!file.eof())
		{
			if(updatef == fc.barcodef)
			{
				fc.Editf();
				file.seekp((int)file.tellg() - sizeof(fc));
				file.write((char*)&fc, sizeof(fc));
				isupdatef = true;
			}
			file.read((char*)&fc, sizeof(fc));
		}
		if(isupdatef == true)
		{
			gotoxy(54+20,30);foreColor(3);cout << ">>>>>UPDATE SUCCESSED<<<<<";
			gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO UPDATE MORE OR ESC FOR BACK!";
			break;
			
			char choiceU;
			if(choiceU==13)
			{
				file.close();
				file.open("InsertFood9.bin", ios::out | ios::in | ios::binary);
				continue;
			}
		}
		else
		{
			gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO UPDATE AGAIN!";
			getch();
			system("cls");
			
			file.clear(); // Clear any error flags on the file
            file.seekg(0, ios::beg); // Reset the file pointer to the beginning
		}
	}
	file.close();
}

fstream file1;
void OrderFF()
{
    int orderidf, newqty;
    bool isorderf = false;
    
    file.open("InsertFood9.bin", ios::in | ios::out | ios::binary);
    file1.open("StockFood2.bin", ios::out | ios::app | ios::binary);

    if (file.bad() || file1.bad())
	{
        system("cls");
        cout << "\nBYE WORLD FILE NOT FOUND!";
        return;
    }
    while (true)
	{
        InsertBox();
        OrderD();

        gotoxy(17 + 52, 12);foreColor(0);cout << "ENTER HERE: ";cin >> orderidf;fflush(stdin); cin.clear();

        file.read((char*)&fc, sizeof(fc));
        bool found = false;

        while (!file.eof())
		{
            if (orderidf == fc.barcodef)
			{
                found = true;
                fc.Coupon();
                gotoxy(17 + 52, 22);cout << "ENTER HERE: ";cin >> newqty;fflush(stdin); cin.clear();
                fc.qtyorder = newqty;
           
                if (fc.qtyf >= newqty)
				{
                    // Process the order
                    cls();
                    InsertBox();
                    InfoD();
                    fc.InputInfo();

                    // Update the stock
                    fc.qtyf -= newqty;
                    int last = file.tellg();
                    file.seekp(last - sizeof(fc)); 
                    file.write((char*)&fc, sizeof(fc));
                    file1.write((char*)&fc, sizeof(fc));

                    isorderf = true;
                    break; 
                }
				else
				{
                    gotoxy(75, 33);cout << "  NOT ENOUGH QUANTITY!!!";
                    gotoxy(75, 34);cout << "PRESS ENTER TO INPUT AGAIN";
                    getch();
                    cls();
                    break;  
                }
            }
            file.read((char*)&fc, sizeof(fc));
        }
        if (!found)
		{
            gotoxy(5 + 58, 33);foreColor(4);cout << "BARCODE NOT FOUND, PRESS ANY KEY TO INPUT AGAIN!!";
            getch();
            cls();
        }
        if (isorderf) {
            break;  
        }
        
        // Reset file pointers for the next attempt
        file.clear();
        file.seekg(0, ios::beg);
    }

    // Close files
    file.close();
    file1.close();
}

void ViewFF()
{
	gotoxy(54+12-3,3);foreColor(0);cout << "HERE IS THE INFORMATION OF CUSTOMERS ORDERED FOOD";
	ViewBox();
	fc.HeaderInfo();
	file1.open("StockFood2.bin", ios::in);
	if(file1.bad())
	{
		system("cls");
		cout << "\nBYE WORLD VIEW";
	}
	file1.read((char*)&fc, sizeof(fc));
	while(!file1.eof())
	{
		fc.InformationO();
		file1.read((char*)&fc, sizeof(fc));
	}
	gotoxy(54+12-3,34);foreColor(0);cout << "    PRESS ENTER FOR STAY HERE OR ESC FOR BACK";
	file1.close();
}


//////////////////////////
class adminn{
	
	public:
		int aa;
	void OptionFood()
	{
		FoodCase();
		int FoodOption;
		gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> FoodOption;fflush(stdin);cin.clear();
		switch(FoodOption)
		{
			case 1:{
				do{
					cls();
					ViewFF();
				}while(getch()!=27);
				cls();
				OptionFood();	
				break;
			}
			case 2:{
				do{
					cls();
					InsertF();
				}while(getch()!=27);
				cls();
				OptionFood();
				break;
			}
			case 3:{
				do{
					cls();
					DeleteF();
				}while(getch()!=27);
				cls();
				OptionFood();	
				break;
			}
			case 4:{
				do{
					cls();
					UpdateF();
				}while(getch()!=27);
				cls();
				OptionFood();	
				break;
			}
			case 5:{
				do{
					cls();
					ViewF();
				}while(getch()!=27);
				cls();
				OptionFood();	
				break;
			}
			case 6:{
				
				cls();
				SearchF();
				getch();
				cls();
				OptionFood();	
				break;
			}
			case 7:{
				
				system("cls");
				BigOption();
				break;
			}
			case 8:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(63+3,33);foreColor(0);cout << "Incorrect Input, Press Enter To Input Again";
				getch();
				system("cls");
				OptionFood();			           
				break;
			}
		}
	}
	void BigOption()
	{

		DesignBigOptionA();
		int MainOption;
		gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; cin >> MainOption;fflush(stdin);cin.clear();
		switch(MainOption)
		{
			case 1:{
				system("cls");
				OptionGrammar();
				break;
			}
			case 2:{
				system("cls");
				OptionFood();
				break;
			}
			case 3:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(57+10,41);cout << "Incorrect Input,  Please Press Enter";
				gotoxy(57+10,42);cout << "           To Input Again          ";
				getch();
				system("cls");
				BigOption();
				break;
			}
		}
	}
	void OptionGrammar()
	{
		GrammarCase();
		gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO SEE CHOOSE IT BELOW";
   		foreColor(4);cout << " \3"; 
		int GrammarOption;
		gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> GrammarOption;fflush(stdin);cin.clear();
		switch(GrammarOption)
		{
			case 1:{
				do{
					cls();
					PaOutput();
				}while(getch()!=27);
				system("cls");
				OptionGrammar();
				break;
			}
			case 2:{
				do{
					cls();
					PerOutput();
				}while(getch()!=27);
				system("cls");
				OptionGrammar();
				break;
			}
			case 3:{
				do{
					cls();
					FuOutput();
				}while(getch()!=27);
				system("cls");
				OptionGrammar();
				break;
			}
			case 4:{
				do{
					cls();
					SiOutput();
				}while(getch()!=27);
				system("cls");
				OptionGrammar();
				break;
			}
			case 5:{
				system("cls");
				BigOption();
				break;
			}
			case 6:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(63+3,33);foreColor(0);cout << "Incorrect Input, Press Enter To Input Again";
				getch();
				system("cls");
				OptionGrammar();
				break;
			}
		}
    }
};
adminn A;
class Userr{
	
	public:
		int uu;
	void Login()
	{
		system("cls");
		bool islogin = true;
		char lusername[30];
		int lpassword;
		int i=3;
		LoginTitle1();
		system("cls");
		
		while(i>=1)
		{
			
			LoginTitle();
			BoxLogin();
			file_re.open("Register1.bin", ios::in);
			if(file_re.bad())
			{
				system("cls");
				cout << "\nBye world!";
			}
		    gotoxy(58+16,21);foreColor(7);cout << "Enter Username:"; cin.get(lusername, 30);fflush(stdin);cin.clear();
			gotoxy(58+16,23);foreColor(7);cout << "Enter Password:"; cin >> lpassword;fflush(stdin);cin.clear();
			file_re.read((char*)&re, sizeof(re));
			while(!file_re.eof())
			{
				if(strcmp(lusername, re.rusername)==0 && lpassword== re.rpassword)
				{
					gotoxy(77,28);cout << "Login Successed!!!";
				    char a=221;
			    	int j=1;
			    	for(int i=1; i<=26; i++)
			    	{
			    		if(i==14)
			    		{
			    			j=1;
						}
						if(i==26)
						{
							j=1;
						}
						gotoxy(72+i,17);foreColor(j);cout << a;delay(50);
						j++;
					}
					islogin = true;
					system("cls");
					BigOptionUser();
					break;
				}
				file_re.read((char*)&re, sizeof(re));
			}
			if(lpassword != re.rpassword)
			{
				i--;
			    if(i>0)
			    {
					LoginTitle();
					BoxLogin();
			       	gotoxy(78,17);foreColor(7);cout <<"Incorrect Input!\n";	
			      	foreColor(4);gotoxy(60,39);cout << "U have Only "<<i<<" Time Left to Input Please Be Careful!!!";
			       	foreColor(5);gotoxy(76,28);cout <<"Enter to Input Again";  // 47
			       	getch();
			       	system("cls");	
			    }
			    else
			    {
			       for(int i=10;i>=1;i--)
			       {
						LoginTitle();
						BoxLogin();
					    gotoxy(70,39);foreColor(4);cout << "Please Wait "<< i << "s To Input Again!!";delay(50);
			       }
			        system("cls");
			        file_re.close();
			        Login();
			    }
			}
		
			file_re.close();
		}		
	}
	void OptionFoodUser()
	{
		JUU:
		FoodCaseUser();
		int FoodOptionUser1;
		gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> FoodOptionUser1;fflush(stdin);cin.clear();
		switch(FoodOptionUser1)
		{
			case 1:{
				do{
					cls();
					ViewF();
				}while(getch()!=27);
				cls();
				OptionFoodUser();	
				break;
			}
			case 2:{
		
				cls();
				SearchF();
				getch();
				cls();
				OptionFoodUser();	
				break;
			}
			case 3:{
				do{
					cls();
					OrderFF();
					cls();
					Receipt();
					fc.OutputOrder();
				}while(getch()!=27);
				cls();
				OptionFoodUser();	
				break;
			}
			case 4:{
				system("cls");
				BigOptionUser();
				break;
			}
			case 5:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(63+3,33);foreColor(0);cout << "Incorrect Input, Press Enter To Input Again";
				getch();
				system("cls");
				OptionFoodUser();	
				break;
			}
		}
	}
	void BigOptionUser()
	{
		DesignBigOption();
		int MainOptionUser;
		gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; cin >> MainOptionUser;fflush(stdin);cin.clear();
		switch(MainOptionUser)
		{
			case 1:{
				system("cls");
				OptionGrammarU();
				break;
			}
			case 2:{
				system("cls");
				OptionFoodUser();
				break;
			}
			case 3:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(57+10,41);cout << "Incorrect Input,  Please Press Enter";
				gotoxy(57+10,42);cout << "           To Input Again          ";
				getch();
				system("cls");
				BigOptionUser();
				break;
			}
		}
	}
	void OptionGrammarU()
	{
		GrammarCase();
		int GrammarOptionU;
		gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> GrammarOptionU;fflush(stdin);cin.clear();
		switch(GrammarOptionU)
		{
			case 1:{
				do{
					system("cls");
					PaInsert();
					cls();
					gr.FPastSimple();
				}while(getch()!=27);
				cls();
				OptionGrammarU();
				break;
			}
			case 2:{			
				do{
					system("cls");
					PerInsert();
					cls();
					gr.FPresentPerfect();
				}while(getch()!=27);
				cls();
				OptionGrammarU();
				break;
			}
			case 3:{
				do{
					system("cls");
					FuInsert();
					cls();
					gr.FFutureSimple();
				}while(getch()!=27);
				cls();
				OptionGrammarU();
				break;
			}
			case 4:{
				do{
					system("cls");
					SiInsert();
					cls();
					gr.FPresentSimple();		
				}while(getch()!=27);
				cls();
				OptionGrammarU();
				break;
			}
			case 5:{
				system("cls");
				BigOptionUser();
				break;
			}
			case 6:{
				system("cls");
				exit(0);
				break;
			}
			default:{
				gotoxy(63+3,33);foreColor(0);cout << "Incorrect Input, Press Enter To Input Again";
				getch();
				system("cls");
				OptionGrammarU();
				break;
			}
		}
    }
};
Userr U;
class Mainclass{
	public:
		int FirstOption;
	void FFirstOption()
	{
		DRegister_Login();
		gotoxy(32+34+11,16);cout << "Enter Option Here: "; cin >> FirstOption;fflush(stdin);cin.clear();
    	switch(FirstOption)
    	{
    		case 1:{
    			system("cls");
    			Register();
    			system("cls");
				U.Login();			
				break;
			}
			case 2:{
				system("cls");
				re.AdminLogin();
				system("cls");
				A.BigOption();
				break;
			}
			case 3:{
				system("cls");
				U.Login();
				break;
			}
			default:{
				DrawRectangle(24+34+11,30,33,1,2);
				gotoxy(36+34+8,31);cout << "Incorrect Input!!!";
				gotoxy(36+34+2,44-11+5);cout << "Press Enter To Input Again";
				getch();
				system("cls");
				FFirstOption();
				break;
			}
		}
	}

};
Mainclass MC;
int main()
{
	FullScreen();
    char a=221;
    // welcome
    gotoxy(12+13,0);foreColor(4);cout << ".--.      .--.    .-''-.    .---.        _______      ,-----.    ,---.    ,---.    .-''-.          ,---------.    ,-----.     ";delay(100);
    gotoxy(12+13,1);foreColor(4);cout << "|  |_     |  |  .'_ _   \\   | ,_|       /   __  \\   .'  .-,  '.  |    \\  /    |  .'_ _   \\         \\          \\ .'  .-,  '.   ";delay(100);
    gotoxy(12+13,2);foreColor(1);cout << "| _( )_   |  | / ( ` )   ',-./  )      | ,_/  \\__) / ,-.|  \\ _ \\ |  ,  \\/  ,  | / ( ` )   '         `--.  ,---'/ ,-.|  \\ _ \\  ";delay(100);
    gotoxy(12+13,3);foreColor(1);cout << "|(_ o _)  |  |. (_ o _)  |\\  '_ '`)  ,-./  )      ;  \\  '_ /  | :|  |\\_   /|  |. (_ o _)  |            |   \\  ;  \\  '_ /  | : ";delay(100);
    gotoxy(12+13,4);foreColor(2);cout << "| (_,_) \\ |  ||  (_,_)___| > (_)  )  \\  '_ '`)    |  _`,/ \\ _/  ||  _( )_/ |  ||  (_,_)___|            :_ _:  |  _`,/ \\ _/  | ";delay(100);
    gotoxy(12+13,5);foreColor(2);cout << "|  |/    \\|  |'  \\   .---.(  .  .-'   > (_)  )  __: (  '\\_/ \\   ;| (_ o _) |  |'  \\   .---.            (_I_)  : (  '\\_/ \\   ; ";delay(100);
    gotoxy(12+13,6);foreColor(5);cout << "|  '  /\\  `  | \\  `-'    / `-'`-'|___(  .  .-'_/  )\\ ```/  \\  )/ |  (_,_)  |  | \\  `-'    /           (_(=)_)  \\ `/  \\  )  /  ";delay(100);
    gotoxy(12+13,7);foreColor(5);cout << "|    /  \\    |  \\       /   |        \\`-'`-'     /  '. \\_/```.'  |  |      |  |  \\       /             (_I_)    '. \\_/```.'   ";delay(100);
    gotoxy(12+13,8);foreColor(5);cout << "`---'    `---`   `'-..-'    `--------`  `._____.'     '-----'    '--'      '--'   `'-..-'              '---'      '-----'     ";delay(100);
    gotoxy(15+40+13,9);foreColor(4);cout << "    )                               )  ";delay(100);
    gotoxy(15+40+13,10);foreColor(4);cout << " ( /(        (                   ( /(  ";delay(100);
    gotoxy(15+40+13,11);foreColor(4);cout << " )\\()) (     )\\     (   (   (    )\\()) ";delay(100);
    gotoxy(15+40+13,12);foreColor(4);cout << "((_)\\  )\\ ((((_)(   )\\  )\\  )\\  ((_)\\  ";delay(100);
    gotoxy(15+40+13,13);foreColor(4);cout << " _((_)((_) )\\ _ )\\ ((_)((_)((_)  _((_) ";delay(100);
    gotoxy(15+40+13,14);foreColor(3);cout << "| || || __|(_)_\\(_)\\ \\ / / | __|| \\| | "; delay(100);
    gotoxy(15+40+13,15);foreColor(3);cout << "| __ || _|  / _ \\   \\ V /  | _| | .` | ";delay(100);
    gotoxy(15+40+13,16);foreColor(3);cout << "|_||_||___|/_/ \\_\\   \\_/   |___||_|\\_| ";delay(100);  
	//
    drawBoxSingleLineWithBG(55+13,28-8,1,7,1);delay(50);//small blue left box
    drawBoxSingleLineWithBG(92+13,28-8,1,7,1);delay(50);//small blue right box
    DrawRectangle(52+13,25-8,1,13,2);delay(50);//green long box left side
    DrawRectangle(103+13,20-8,1,30,2);delay(50);//green long box right side
    DrawRectangle(44+13,20-8,1,30,4);delay(50);// red long box left side
    DrawRectangle(47+13,21-8,1,28,3);// similar white left
    DrawRectangle(100+13,21-8,1,28,3);// similar white right
    // another small one
    DrawRectangle(49+13,22-8,1,26,3);//left
    DrawRectangle(98+13,22-8,1,26,3);//right
    DrawRectangle(95+13,25-8,1,13,4);delay(50);
    drawBoxSingleLineWithBG(52+13,40-8,44,1,7);delay(50);
    drawBoxSingleLineWithBG(53+13,41-8,42,1,9);delay(50);
    drawBoxSingleLineWithBG(54+13,42-8,40,1,12);delay(50);

     drawBoxSingleLineWithBG(35+13,28-8,6,1,2);delay(50);//green small box with heart
     drawBoxSingleLineWithBG(107+13,28-8,6,1,4);delay(50);// red small box with heart
     DrawRectangle(38+13,31-8,1,7,4);delay(50);
     DrawRectangle(110+13,31-8,1,7,2);delay(50);
     HLine(38+13,29-8,5,2,'\3');delay(50);
     HLine(105+13,29-8,5,4,'\3');delay(50);  
     drawBoxSingleLineWithBG(58+13,31-8,32,1,7);delay(50);
     // claim tree left top
     gotoxy(2+5,10+1);foreColor(2);cout << "        a@@@@a";
     gotoxy(2+5,11+1);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(2+5,12+1);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(2+5,13+1);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(2+5,14+1);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(2+5,15+1);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(2+5,16+1);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(2+5,17+1);foreColor(8);cout << "         \\\\//";
     gotoxy(2+5,18+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,19+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,20+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,21+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,22+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,23+1);foreColor(8);cout << "        //||\\\\";
     
      //buttom
     gotoxy(13+8,10+20);foreColor(2);cout << "        a@@@@a";
     gotoxy(13+8,11+20);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(13+8,12+20);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(13+8,13+20);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(13+8,14+20);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(13+8,15+20);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(13+8,16+20);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(13+8,17+20);foreColor(8);cout << "         \\\\//";
     gotoxy(13+8,18+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,19+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,20+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,21+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,22+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,23+20);foreColor(8);cout << "        //||\\\\";
     
     
     // claim tree right
     // claim tree  top
     gotoxy(126+20,10+1);foreColor(2);cout << "        a@@@@a";
     gotoxy(126+20,11+1);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(126+20,12+1);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(126+20,13+1);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(126+20,14+1);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(126+20,15+1);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(126+20,16+1);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(126+20,17+1);foreColor(8);cout << "         \\\\//";
     gotoxy(126+20,18+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,19+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,20+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,21+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,22+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,23+1);foreColor(8);cout << "        //||\\\\";
     
     // buttom
     gotoxy(114+17,10+20);foreColor(2);cout << "        a@@@@a";
     gotoxy(114+17,11+20);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(114+17,12+20);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(114+17,13+20);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(114+17,14+20);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(114+17,15+20);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(114+17,16+20);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(114+17,17+20);foreColor(8);cout << "         \\\\//";
     gotoxy(114+17,18+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,19+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,20+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,21+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,22+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,23+20);foreColor(8);cout << "        //||\\\\";
 
	gotoxy(58+13,30-8);foreColor(3);cout << "Loading...";
    int j=1;
    for(int i=1; i <=25 ; i++)
    {
		if(i==14)
		{
		    j=1;
		}
		if(i==28)
		{
			j=1;
		}
        foreColor(j);gotoxy(57+13+i,32-8);cout <<a;delay(70);
        gotoxy(87+13,34-8);cout <<i+i+i<< "%";
        j++;
    }    
     for(int i=1; i <=7 ; i++)
    {
		if(i==1)
		{
		    j=1;
		}
		if(i==28)
		{
			j=1;
		}
	
        foreColor(j);gotoxy(57+13+25+i,32-8);cout <<a;delay(250);
        gotoxy(87+13,34-8);cout <<75+i+i+i+4<< "%";
        j++;
    }
    system("cls");
    /////////////////////////////////////////////////////////////////////////////////////////
	DRegister_Login();
	
	MC.FFirstOption();
		
	return 0;
	
}