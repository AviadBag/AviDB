#include "IO.h"

string IO::Read(string path)
{
	ifstream file(path);
	if (file.is_open())
	{
		string data;
		string line;

		while (getline(file, line))
		{
			data.append(line);
			data.append("\n");
		}

		file.close();
		return data;
	}
	
	throw 0;
}

void IO::Write(string path, string data)
{
	ofstream file(path);
	if (file.is_open())
	{
		file << data;
		file.close();
	}
	else throw 0;
}
