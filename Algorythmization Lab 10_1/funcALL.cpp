//#include <iostream>
//#include <string>
//#include <fstream>
//#include <iomanip>
//#include <windows.h>
//#include "funcALL.h"
////#include "Struct.h"
//#include "VAR.h"
//using namespace std;
//using namespace VAR;
//void printBorder(int c, char ch) {
//	while (c-- > 0) {
//		cout << ch;
//	}
//}
//
//void printGroup(Student* Group, int size) {
//	printBorder(101, '=');
//	cout << endl;
//	cout << "|" << setw(6) << left << "N"
//		<< "|"
//		<< setw(11) << "SURNAME" << "|"
//		<< setw(12) << "ST. YEAR" << "|"
//		<< setw(22) << left
//		<< "PROFESSION" << "|"
//		<< setw(14) << "PHYSICS(g)" << "|"
//		<< setw(14) << "MATH(g)" << "|"
//		<< setw(14) << "INFORMATICS(g)" << "|"
//		<< endl;
//	printBorder(101, '-');
//	cout << endl;
//	int phys = 0, math = 0, infr = 0;
//	for (int i = 0; i < size; i++) {
//		phys = Group[i].gPhys % 1000;
//		math = Group[i].gMath / 1000 % 1000;
//		infr = Group[i].gInfr / 1000000;
//
//		cout << "|"
//			<< setw(6) << i + 1 << "|"
//			<< setw(11) << Group[i].surname << "|"
//			<< setw(12) << Group[i].sYear << "|"
//			<< setw(22) << left << ProfToStr(Group[i].sProf) << "|"
//			<< setw(11) << left << to_string(phys) << "(" << TotalGrade(phys) << ")" << "|"
//			<< setw(11) << left << to_string(math) << "(" << TotalGrade(math) << ")" << "|"
//			<< setw(11) << left << to_string(infr) << "(" << TotalGrade(infr) << ")" << "|" << endl;
//	}
//	printBorder(101, '=');
//
//}
//
//int TotalGrade(int fullGr) {
//	if (fullGr <= 25) {
//		return 1;
//	}
//	else if (fullGr > 25 && fullGr <= 49) {
//		return 2;
//	}
//	else if (fullGr > 49 && fullGr <= 70) {
//		return 3;
//	}
//	else if (fullGr > 70 && fullGr <= 87) {
//		return 4;
//	}
//	else if (fullGr > 87) {
//		return 5;
//	}
//}
//
//string ProfToStr(Proffesion prof) {
//	switch (prof) {
//	case COMPSI:
//		return "Computer Science";
//		break;
//	case INFORMATCS:
//		return "Informatics";
//		break;
//	case MATHECON:
//		return "Math and Economy";
//		break;
//	case PHYSINFORM:
//		return "Physics & Informatics";
//		break;
//	case LABORED:
//		return "Labor Education";
//		break;
//	default:
//		return "Undefined";
//		break;
//	}
//}
////COMPSI, INFORMATCS, MATHECON, PHYSINFORM, LABORED
//
//
//
//
//
//void SaveToFile(Student* p, const int N, string filename)
//{
//	ofstream fout(filename, ios::binary | ios::trunc); // відкрили бінарний файл запису
//	fout.write((char*)&N, sizeof(N)); // записали кількість елементів
//	for (int i = 0; i < N; i++)
//		fout.write((char*)&p[i], sizeof(Student)); // записали елементи масиву
//	fout.close(); // закрили файл
//}
//
//void scanFtoStruct(Student*& p, int& N, const char* filename)
//{
//	delete[] p; // знищили попередні дані
//	ifstream fin(filename, ios::binary); // відкрили бінарний файл зчитування
//	fin.read((char*)&N, sizeof(N)); // прочитали кількість елементів
//	p = new Student[N]; // створили динамічний масив
//	for (int i = 0; i < N; i++)
//		fin.read((char*)&p[i], sizeof(Student)); // прочитали елементи масиву
//	fin.close(); // закрили файл
//}
//
//
//
//
//
//Student* Create(Student*& p, int N)
//{
//
//	int prof;
//	int EnterG = 0;
//	delete[] p;
//	p = new Student[N];
//	int Gval = 0;
//	for (int i = 0; i < N; i++)
//	{
//
//		cout << "Student N: " << i + 1 << ":" << endl;
//
//		cin.get();
//		cin.sync();
//
//		cout << " surname: "; getline(cin, p[i].surname);
//
//		cout << " study year: "; cin >> p[i].sYear;
//		cout << " profession (0 - COMPUTER SCIENCE, 1 - INFORMATICS, 2 - MATH and ECONOMY, 3 - PHYSICS and INFORMATICS, 4 - LABOR EDUCATION)";
//		cin >> prof;
//		p[i].sProf = (Proffesion)prof;
//		cout << "\n\nPhysics grade: ";
//		cin >> p[i].gPhys;
//		cout << "\n\nMath grade: ";
//
//		cin >> Gval;
//		p[i].gMath += Gval * 1000;
//		cout << "\n\nInformatics grade: ";
//		cin >> Gval;
//		p[i].gInfr += Gval * 1000000;
//		cout << endl;
//	}
//	return p;
//	//COMPSI, INFORMATCS, MATHECON, PHYSINFORM, LABORED
//}
//
//int calcLowGrStud(Student* group, int size) {
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		if (isLower(group[i], 88))
//			count++;
//	}
//	return count;
//}
//
//bool isLower(Student toComp, int lowP) {
//	int phys = toComp.gPhys % 1000;
//	int math = toComp.gMath / 1000 % 1000;
//	int infr = toComp.gInfr / 1000000;
//	return	((phys + math + infr) * 1.0 / 3.0) < (lowP * 1.0);
//
//
//}
//
//void calcLowestSubj(Student* toComp, int size) {
//	int sumMathI = 0, sumPhysI = 0, sumInfrI = 0;
//	for (int i = 0; i < size; i++) {
//		sumMathI += toComp[i].gMath / 1000 % 1000;
//		sumPhysI += toComp[i].gPhys % 1000;
//		sumInfrI += toComp[i].gInfr / 1000000;
//	}
//	double sumMath = (sumMathI * 1.0) / size;
//	double sumPhys = (sumPhysI * 1.0) / size;
//	double sumInfr = (sumInfrI * 1.0) / size;
//	string subjL[3] = { "MATH: ", "PHYSICS: ", "INFORMATICS: " };
//	if (sumMath < sumPhys && sumMath < sumInfr) {
//		cout << "The lowest in grades subject is " << subjL[0] << ": " << sumMath << "(avg)";
//	}
//	else if (sumPhys < sumMath && sumPhys < sumInfr) {
//		cout << "The lowest in grades subject is " << subjL[1] << ": " << sumPhys << "(avg)";
//	}
//	else if (sumInfr < sumMath && sumInfr < sumPhys) {
//		cout << "The lowest in grades subject is " << subjL[2] << ": " << sumInfr << "(avg)";
//	}
//	else {
//		cout << "NONE";
//	}
//}