#pragma once
#include "test.h"
//#include "working_code.h"
#include "my_code.h"
#undef main
#undef cin
#undef cout
void makeTest1709() {
	int n, d, a;
	n = rand() % 20 + 1;
	d = rand() % 1000000;
	a = rand() % 1000000;
	vector <vector <int>> inpmatrix(n, vector <int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				inpmatrix[j][i] = inpmatrix[i][j] = rand() % 2;
			}
		}
	}
	inp << n << endl << d << ' ' << a << endl;
	ss0 << n << endl << d << ' ' << a << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			inp << inpmatrix[i][j];
			ss0 << inpmatrix[i][j];
		}
		inp << endl;
		ss0 << endl;
	}
}
//void runTest1709(int i) {
//	switchClearInp();
//	makeTest1709();
//	string InputCopy = ss0.str();
//	switchInp();
//	try { if(workingCode()) throw exception(); }
//	catch (const exception& err) {
//		cout << "Working code occured to be not always working" << endl;
//	}
//	switchInp();
//	try { if(myCode()) throw exception(); }
//	catch (const exception& err) {
//		cout << "My code crashed!" << endl;
//	}
//	long long Cost1, Cost2;
//	ss1 >> Cost1;
//	ss2 >> Cost2;
//	if (Cost1 != Cost2) {
//		string s1 = ss1.str();
//		string s2 = ss2.str();
//		out << "Error!" << endl 
//			<< "Working code result:" << endl
//			<< s1 << endl 
//			<< "My code result:" << endl
//			<< s2 << endl 
//			<< "Source data:" << endl
//			<< InputCopy << endl;
//	}
//	else
//	{
//		out << "Test " << i << " passed" << endl;
//		out << "Cost is " << Cost1 << endl;
//	}
//	out << endl;
//	switchOut();
//	ss0.clear(); ss1.clear(); ss2.clear();
//}
void changeGraph1709(vector <vector <char>>& graph, vector <vector <char> >& matrix) {
	for (int i = 0, size = graph.size(); i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (matrix[i][j] == 'd') {
				graph[i][j] = '0';
			}
			else if (matrix[i][j] == 'a') {
				graph[i][j] = '1';
			}
		}
	}
}
string makeTest1354() {
	string s = "01234567890";
	for (int i = 0, size = s.size(); i < size; i++) {
		s[i] = char(rand() % 57 + 65);
	}
	switchClearInp();
	inp << s;
	return s;
}
bool checker1354(string& answer) {
	return checkSym(answer);
}

void testScenario(int i) {
	string test = makeTest1354();
	string answer = getAnswer();
	outputTestResult(test, i, answer, checker1354);
}
int main() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		testScenario(i);
	}
}