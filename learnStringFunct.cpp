#include<iostream>
#include<string>
using namespace std;

int main() {

	string saying = "hey, what's up?";
	cout << saying.substr(5, 9) << endl;//substring function takes the 
	//begining index and goes to where you want it to end
	//so you ask what character you'd like to start with, 
	//and where would you like to end

	//Next, we're going to use swap function
	string newSaying = "How are you doing today?";
	string reply = "I'm doing fine, thank you!";

	//swap function allows us to trade one string for the other
	//the parameter it takes is the string you want to swap it with
	newSaying.swap(reply);
	//output it to see if it works!
	cout << newSaying << endl;

	//the find function: strings are just arrays of characters
	string suess = "I am Sam, Sam I am!";
	
	cout << suess.find("am") << endl;
	
	//this returns a 2, which is the beginning location of the first
	//instance of "am", so even though we have 4 occurances of 
	//"am", it only returns the first occurance
	//To get the last occurance, us rfind, which means reverse find

	cout << suess.rfind("am") << endl;

	//for rfind, you should get 16 because it looks from right to left

	system("pause");
	return 0;
}