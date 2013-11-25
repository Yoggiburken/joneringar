#include"Jonfor.hpp"

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
		string temp, temp_jon, temp_namn;
		size_t pos;
		getline(file, temp);
		pos = temp.find(',');
		temp_jon = temp.substr(0, pos);
		temp_namn = temp.substr(pos, temp.size());
		cout<<temp_jon<<"     "<<temp_namn<<endl;
		jonfor.push_back(temp);
	} while(!file.eof());
	
	file.close();
	bool running = true;
	int  r_jon;
	while(running)
	{
		r_jon = rand()%jonfor.size();
		
	}
}
