// Mendel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "--Welcome to MathFlare's c++ Punnett Scuare Calculator--" << endl;
	cout << "--------------------------------------------------------" << endl;
	while (true)
	{
		char F1, F2, M1, M2;
		cout << "Awnser with A or a(A: epikrates, a: ypoleipomeno)" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "Enter father's first allillomorfo gonidio for a characteristic" << endl;
		cin >> F1;
		cout << "Enter father's seconde allillomorfo gonidio for the same characteristic" << endl;
		cin >> F2;
		cout << "Enter mother's first allillomorfo gonidio for a characteristic" << endl;
		cin >> M1;
		cout << "Enter mother's seconde allillomorfo gonidio for the same characteristic" << endl;
		cin >> M2;
		if (F1 == 'A' || F1 == 'a' && F2 == 'A' || F2 == 'a' && M1 == 'A' || M1 == 'a' && M2 == 'A' || M2 == 'a')
		{
			cout << "==================================================================================" << endl;
			cout << "Father's genotype: " << F1 << F2 << "      X      " << " Mother's genotype: " << M1 << M2 << endl;
			cout << "Father's gametes: " << F1 << "," << F2 << "," << F1 << "," << F2 << "          Mother's gametes: " << M1 << "," << M2 << "," << M1 << "," << M2 << endl;
			cout << endl;
			cout << " Child's possible genotype : " << endl;
			cout << endl;
			cout << "M/F| " << F1 << "  | " << F2 << "  | " << endl;
			cout << "--------------" << endl;
			cout << M1 << "  | " << F1 << M1 << " | " << F2 << M1 << " | " << endl;
			cout << "--------------" << endl;
			cout << M2 << "  | " << F1 << M2 << " | " << F2 << M2 << " | " << endl;
			cout << "------------------------------------------------------------------------------------------" << endl;
			//*possibilites of a phenotype and a genotype still in progress...
			if (F1 == M1 == F2 == M2)
			{
				if (F1 == 'A')
				{
					cout << "100% for genotype AA and 100% for phenotype A" << endl;
					cout << "==================================================================================" << endl;
					//100% AA
				}
				else if (F1 == 'a')
				{
					cout << "100% for genotype aa and 100% for phenotype a" << endl;
					cout << "==================================================================================" << endl;
					//100% aa
				}
			}
			else if (F1 == M1 && F2 == M2)
			{
				cout << "50% for genotype Aa, 25% for genotype AA, 25% for genotype aa and 75% for phenotype A, 25% for phenotype a" << endl;
				cout << "=============================================================================================================" << endl;
				//50% for Aa, 25% for AA, 25% for aa
			}
			else if (F1 == M1 && F2 != M2)
			{
				cout << "50% for genotype AA, 50% for genotype Aa and 100% for phenotype A" << endl;
				cout << "==================================================================================" << endl;
				//50%AA 50%Aa
			}
			else if (F1 != M1 && F2 == M2)
			{
				cout << "50% for genotype aa, 50% for genotype Aa and 50% for phenotype a, 50% for phenotype A" << endl;
				cout << "========================================================================================" << endl;
				//50%aa 50%Aa
			}
			else if (F1 != M1 && F2 != M2)
			{
				cout << "100% for genotype Aa and 100% for phenotype A" << endl;
				cout << "==================================================================================" << endl;
				//100% Aa
			}
		}
		else
		{
			cout << "Please awnser with A or a(A: epikrates gonidio, a: ypoleipomeno gonidio)" << endl;
			cout << "==================================================================================" << endl;
		}
	}
}
//Enter father's first allillomorfo gonidio for a characteristic
//a
//Enter father's seconde allillomorfo gonidio for the same characteristic
//b
//Enter mother's first allillomorfo gonidio for a characteristic
//a
//Enter mother's seconde allillomorfo gonidio for the same characteristic
//b