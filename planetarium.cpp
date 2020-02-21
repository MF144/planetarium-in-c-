#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	int ans = 0;
	string Ans1 = "";
	double Ans2 = 0.0;
	string Ans3 = "";
	double Ans4 = 0.0;
	double Ans5 = 0.0;
	string Ans6 = "";
	double Ans7 = 0.0;
	string Ans8 = "";
	string Ans9 = "";
	string Ans10 = "";
		cout << "1----------------Mercury" << endl;
		cout << "2----------------Venus" << endl;
		cout << "3----------------Earth" << endl;
		cout << "4----------------Mars" << endl;
		cout << "5----------------Jupiter" << endl;
		cout << "6----------------Saturn" << endl;
		cout << "7----------------Uranus" << endl;
		cout << "8----------------Neptune" << endl;
		cout << "9----------------Pop Quiz" << endl;
		cout << "Enter an option [1-9]: ";	cin >> n;
		switch (n)
		{
		case 1:
			cout << "Mercury" << endl;
			cout << "-Smallest and most innermost planet in the Solar System" << endl
				<< "-57.91 million km away from the sun" << endl
				<< "-Discovered by Timocharis in 265 BC" << endl
				<< "-Size is 4,879 km" << endl;
			break;
		case 2:
			cout << "Venus" << endl;
			cout << "-Has the longest rotation period (243 days) of any planet in the Solar System" << endl
				<< "-108.2 million km away from the sun" << endl
				<< "-Known since 1581 BC" << endl
				<< "-Size is 12,104 km" << endl;
			break;
		case 3:
			cout << "Earth" << endl;
			cout << "-Only planet that can support life" << endl
				<< "-149.6 million km away from the sun" << endl
				<< "-Copernicus discovered that the Earth rotates around the Sun by 1510" << endl
				<< "-Size is 12,742 km" << endl;
			break;
		case 4:
			cout << "Mars" << endl;
			cout << "-Often referred to as the 'Red Planet' " << endl
				<< "-227.9 million km away from the sun" << endl
				<< "-Been documented for at least 4,000 years" << endl
				<< "-Size is 6,779 km" << endl;
			break;
		case 5:
			cout << "Jupiter" << endl;
			cout << "-Largest planet in the solar system" << endl
				<< "-778.5 million km away from the sun" << endl
				<< "-Known since prehistoric times" << endl
				<< "-Size is 139,822 km" << endl;
			break;
		case 6:
			cout << "Saturn" << endl;
			cout << "-Has a prominent ring system that consists of nine continuous main rings and three discontinuous arcs  " << endl
				<< "-1.429 billion km away from the sun" << endl
				<< "-Known since prehistoric times" << endl
				<< "-Size is 116,464 km" << endl;
			break;
		case 7:
			cout << "Uranus" << endl;
			cout << "-The coldest planetary atmosphere in the Solar System" << endl
				<< "-2.871 billion km away from the sun" << endl
				<< "-Discovered by William Herschel on 1781" << endl
				<< "-Size is 50,724 km" << endl;
			break;
		case 8:
			cout << "Neptune" << endl;
			cout << "-Densest giant planet" << endl
				<< "-4.498 billion km away from the sun" << endl
				<< "-Discovered by Johann Gottfried Galle on 1846" << endl
				<< "-Size is 49,244 km" << endl;
			break;
		case 9:
			goto QUIZ;

		QUIZ:
			cout << "1. What is the smallest planet in the solar system? "; cin >> Ans1;
			if (Ans1 == "Mercury" || Ans1 == "mercury")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "2. When was Mercury discovered? (B.C.) "; cin >> Ans2;
			if (Ans2 == 265)
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "3. What planet is referred to as the 'Red Planet'? "; cin >> Ans3;
			if (Ans3 == "Mars" || Ans3 == "mars")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "4. How big is Uranus in diameter? (km) "; cin >> Ans4;
			if (Ans4 == 50724)
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "5. When was Neptune discovered? "; cin >> Ans5;
			if (Ans5 == 1846)
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "6. What is the only planet that supports life? "; cin >> Ans6;
			if (Ans6 == "Earth" || Ans6 == "earth")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "7. Venus' rotation period is how many days? "; cin >> Ans7;
			if (Ans7 == 243)
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "8. Who discovered Uranus? (surname only) "; cin >> Ans8;
			if (Ans8 == "Herschel" || Ans8 == "herschel")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "9. Who discovered Mercury? " ; cin >> Ans9;
			if (Ans9 == "Timocharis" || Ans9 == "timocharis")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "10. What is the coldest planet in the solar system? "; cin >> Ans10;
			if (Ans10 == "Uranus" || Ans10 == "uranus")
			{
				cout << "Correct answer!" << endl;
			}
			else
			{
				cout << "Wrong answer!" << endl;
				goto QUIZ;
			}
			cout << "CONGRATULATIONS! You finished this quiz with flying colors!" << endl;
		}
	system("pause");
	return 0;
}