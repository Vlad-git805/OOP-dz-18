#pragma once
#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

class FileReader
{
protected:

public:
	virtual void Display(string path)
	{
		ifstream fs(path);
		if (!fs)
		{
			cout << "Error" << endl;
			return;
		}
		else
		{
			char data;
			while (fs.get(data))
			{
				cout << data;
			}
		}
		fs.close();
	}
};

class ASCIIFileReader : public FileReader
{
private:

public:
	virtual void Display(string path)
	{
		ifstream fs(path);
		if (!fs)
		{
			cout << "Error" << endl;
			return;
		}
		else
		{
			char data;
			while (fs.get(data))
			{
				cout << (int)data;
			}
		}
		fs.close();
	}
};

class BinarypathFileReader : public FileReader
{
private:

public:
	virtual void Display(string path)
	{
		ifstream fs(path);
		if (!fs)
		{
			cout << "Error" << endl;
			return;
		}
		else
		{
			char data;
			while (fs.get(data))
			{
				bitset<8> bs(data);
				cout << bs;
			}
		}
		fs.close();
	}
};