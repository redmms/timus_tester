#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <span>
#include <ctime>
#include <exception>
using namespace std;
stringstream ss0, ss1, ss2;
fstream inp("input.txt", ios::trunc | ios::in | ios::out);
fstream out("output.txt", ios::out);
void inputMatrix(vector <vector <char>>& matrix);
void outputMatrix(vector <vector <char>>& matrix);
bool checkSym(string& s);
void switchInp();
void switchClearInp();
void switchOut();
void switchEndOut();
void switchClearOut();
string getAnswer();  // Caution: deletes ss2 contents
void outputTestResult(string& test, int testNumber, string& answer);
void outputTestResult(string test, int testNumber, string answer);
void outputTestResult(string& test, int testNumber, string& answer, bool(*checker)(string&));