#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Shape
{
protected:

public:
	virtual void Show()const = 0;

	virtual void Save()const = 0;

	virtual void Load() = 0;
};

class Square : public Shape
{
private:
	int x;
	int y;
	float side_length;
public:
	Square() : x(0), y(0), side_length(0) {}
	Square(int x, int y, float side_lenght) : x(x), y(y), side_length(side_lenght) {}
	virtual void Show()const
	{
		cout << "---Square---" << endl;
		cout << "Position: X:" << x << " Y: " << y << endl;
		cout << "Side lenght: " << side_length << endl;
	}

	virtual void Save()const
	{
		ofstream fout("square.txt");
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << side_length << endl;
		}
		else
		{
			cout << "file not open!\n\n" << endl;
		}
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin("square.txt");
		if (fin.is_open())
		{
			cout << "file open!" << endl;
			while (!fin.eof())
			{
				fin >> x;
				fin >> y;
				fin >> side_length;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};

class Rectangle : public Shape
{
private:
	int x;
	int y;
	double height;
	double width;
public:
	Rectangle() : x(0), y(0), height(0), width(0) {}
	Rectangle(int x, int y, double height, double width) : x(x), y(y), height(height), width(width) {}
	virtual void Show()const
	{
		cout << "---Rectangle---" << endl;
		cout << "Position: X:" << x << " Y: " << y << endl;
		cout << "Height: " << height << endl;
		cout << "Width: " << width << endl;
	}

	virtual void Save()const
	{
		ofstream fout("rectangle.txt");
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << height << endl;
			fout << width << endl;
		}
		else
		{
			cout << "file not open!\n\n" << endl;
		}
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin("rectangle.txt");
		if (fin.is_open())
		{
			cout << "file open!" << endl;
			while (!fin.eof())
			{
				fin >> x;
				fin >> y;
				fin >> height;
				fin >> width;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};

class Ñircle : public Shape
{
private:
	int x;
	int y;
	float radiys;
public:
	Ñircle() : x(0), y(0), radiys(0) {}
	Ñircle(int x, int y, float radiys) : x(x), y(y), radiys(radiys) {}
	virtual void Show()const
	{
		cout << "---Circle---" << endl;
		cout << "Position: X:" << x << " Y: " << y << endl;
		cout << "Radiys: " << radiys << endl;
	}

	virtual void Save()const
	{
		ofstream fout("circle.txt");
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << radiys << endl;
		}
		else
		{
			cout << "file not open!\n\n" << endl;
		}
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin("circle.txt");
		if (fin.is_open())
		{
			cout << "file open!" << endl;
			while (!fin.eof())
			{
				fin >> x;
				fin >> y;
				fin >> radiys;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};

class Ellipse : public Shape
{
private:
	int x;
	int y;
	double height;
	double width;
public:
	Ellipse() : x(0), y(0), height(0), width(0) {}
	Ellipse(int x, int y, double height, double width) : x(x), y(y), height(height), width(width) {}
	virtual void Show() const
	{
		cout << "---Ellipse---" << endl;
		cout << "Position: X:" << x << " Y: " << y << endl;
		cout << "Height: " << height << endl;
		cout << "Width: " << width << endl;
	}

	virtual void Save()const
	{
		ofstream fout("ellipse.txt");
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << height << endl;
			fout << width << endl;
		}
		else
		{
			cout << "file not open!\n\n" << endl;
		}
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin("ellipse.txt");
		if (fin.is_open())
		{
			cout << "file open!" << endl;
			while (!fin.eof())
			{
				fin >> x;
				fin >> y;
				fin >> height;
				fin >> width;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};
