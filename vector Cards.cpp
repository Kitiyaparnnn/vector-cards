#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

struct Card{
	string desk;
	string namecard;
	int score;
};

int main(){
	srand(time(0));
	vector<Card> cc;
	ifstream cards;
	cards.open("cards.txt");
	string ccard;
	
	
	while(getline(cards,ccard)){
		Card c;
		char desk[100];
		char name[100];
		sscanf(ccard.c_str(),"%[^;];%[^;];%d",desk,name,&c.score);
		c.desk = desk;
		c.namecard = name;
		cc.push_back(c);
		//cout<< c.score << "\n";
	}
	int i = rand()%52;
	cout<< i <<"\n";
	cout<<cc[i].score;
}
