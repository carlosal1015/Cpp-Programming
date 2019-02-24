#include<iostream>

using namespace std;

main(){

	string date, time;
	char journal[23];

	cout<<"Date:\t";
	cin>>date;
	cout<<"Time:\t";
	cin>>time;

	cout<<"Journal Entry:\t";
	cin.ignore();
	cin.getline(journal,23);

	cout<<endl;
}