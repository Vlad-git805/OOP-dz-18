#include <iostream>
#include <fstream>
#include "File_Reader.h"
#include "Shape.h"

using namespace std;

int main()
{

	FileReader fl;
	fl.Display("text.txt");
	cout << endl;

	ASCIIFileReader asc;
	asc.Display("text.txt");
	cout << endl;

	BinarypathFileReader bn;
	bn.Display("text.txt");
	cout << endl << endl;

	Shape * sh[4]
	{
		new Square(5, 5, 10),
		new Rectangle(4, 4, 9, 7),
		new Сircle(4, 6, 5.5),
		new Ellipse(7, 7, 10, 12)
	};

	for (int i = 0; i < 4; i++)
	{
		sh[i]->Show();
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		sh[i]->Save();
	}

	cout << endl;
	Shape * sh2[4]
	{
		new Square,
		new Rectangle,
		new Сircle,
		new Ellipse
	};

	for (int i = 0; i < 4; i++)
	{
		sh2[i]->Load();
		sh2[i]->Show();
		cout << endl;
	}


	system("pause");
	return 0;
}