#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<string> jonfor;
	ifstream file;
	file.open("joner.txt");
	do {
		string temp;
		getline(file, temp);
		jonfor.push_back(temp);
	} while(!file.eof());
	file.close();
	bool running = true;
	while(running)
	{
	}
}
