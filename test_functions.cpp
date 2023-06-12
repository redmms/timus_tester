#include "test.h"
void inputMatrix(vector <vector <char>>& matrix) {
	auto n = matrix.size(); string line;
	for (int i = 0; i < n; i++) {
		cin >> line;
		for (int j = 0; j < n; j++) {
			matrix[i][j] = line[j];
		}
	}
}
void outputMatrix(vector <vector <char>>& matrix)
{
	auto n = matrix.size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
bool checkSym(string& s) {
	int size = s.size(), rs = ceil(float(size) / 2), ls = !size % 2 ? rs - 1 : rs - 2;
	for (int l = ls, r = rs; r < size; l--, r++) {
		if (s[l] != s[r])
			return false;
	}
	return true;
}
void switchInp() {
	inp.close();
	inp.open("input.txt", ios::out | ios::in);
}
void switchClearInp() {
	inp.close();
	inp.open("input.txt", ios::trunc | ios::out | ios::in);
}
void switchOut() {
	out.close();
	out.open("output.txt", ios::out);
}
void switchEndOut() {
	out.close();
	out.open("output.txt", ios::out | ios::app);
}
void switchClearOut() {
	out.close();
	out.open("output.txt", ios::out | ios::trunc);
}
string getAnswer() {  // Caution: deletes ss2 contents
	switchInp();
	myCode();
	string answer = ss2.str();
	ss2.str("");
	return answer;
}
void outputTestResult(string& test, int testNumber, string& answer) {
	switchEndOut();
	out << "Test No " << testNumber << ":" << endl
		<< test << endl
		<< "Answer:" << endl
		<< answer << endl << endl;
}
void outputTestResult(string test, int testNumber, string answer) {
	switchEndOut();
	out << "Test No " << testNumber << ":" << endl
		<< test << endl
		<< "Answer:" << endl
		<< answer << endl << endl;
}
void outputTestResult(string& test, int testNumber, string& answer, bool(*checker)(string&)) {
	switchEndOut();
	out << "Test No " << testNumber << ":" << endl
		<< test << endl
		<< "Answer:" << endl
		<< answer << endl
		<< "Answer is " << (checker(answer) ? "right" : "wrong") << endl << endl;
}
