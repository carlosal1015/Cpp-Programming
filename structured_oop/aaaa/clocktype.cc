//The program listing of the program that defines
//and uses the class clockType
#include <iostream>
using namespace std;

class clockType
{
public:
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(const clockType&) const;

private:
	int hr;
	int min;
	int sec;
};

int main()
{
	clockType myClock;
	clockType yourClock;
	
	int hours;
	int minutes;
	int seconds;
	
	//Set the time of myClock
	myClock.setTime(5, 4, 30);
	
	cout << "Line 9: myClock: ";
	myClock.printTime();//print the time of myClock
	cout << endl;
	
	//compare myClock and yourClock
	if (myClock.equalTime(yourClock))
		cout << "Line 20: Both times are equal."
			<< endl;
	else
		cout << "Line 22: The two lines are not equal."
			<< endl;
	cout << "Line 23: Enter the hours, minutes, and "
		<< "seconds: ";
	cout << endl;
	
	//Set the time of myClock using the value of the
	//variables  hours, minutes, and seconds
	myClock.setTime(hours, minutes, seconds);
	
	cout << "Line 27: New myClock: ";
	myClock.printTime();//print the time of myClock
	cout << endl;
	
	//Increment the time of myClock by one second
	myClock.printTime();
	cout << endl;
	
	//Increment the time of myClock by one second
	myClock.incrementSeconds();
	
	cout << "Line 31: After incrementing myClock by "
		<< "one	second, myClock: ";
	myClock.printTime();//print the time of myClock
	cout << endl;
	
	//Retrieve
	
	
	

}
