#include"Jonfor.hpp"

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<Jonfor> jonfor;
	ifstream file;
	file.open("joner.txt");
	do {
		string temp, temp_jon, temp_namn;
		size_t pos;
		getline(file, temp);
		pos = temp.find(',');
		temp_jon = temp.substr(0, pos);
		temp_namn = temp.substr(pos+1, temp.size());
		Jonfor temp_jonfor;
		temp_jonfor.namn = temp_namn;
		temp_jonfor.formel  = temp_jon;
		jonfor.push_back(temp_jonfor);
	} while(!file.eof());
	file.close();
	
	bool running = true;
	int  r_jon;
	while(running)
	{
		string guess;
		r_jon = rand()%jonfor.size();
		cout<<jonfor[r_jon].namn<<endl;
		getline(cin, guess);
		if(guess == jonfor[r_jon].formel) {
			cout<<"RIGHT!!"<<endl;
		} else {
			cout<<"WRONG!!"<<endl;
			cout<<"'"<<jonfor[r_jon].formel<<"'"<<endl;
		}
		guess.clear();
		cin.clear();
	}
}
