// BinaryCpp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

class binaryHandler
{

public:
	binaryHandler();
	int getDecimalValue(string aString);
	string getReversedBinaryString(int binaryNumber);
	string reverseString(string);;

private:
	string binaryString;
	string one;
	string zero;


};

binaryHandler:: binaryHandler()
{
	one = "1";
	zero = "0";

}

string binaryHandler:: getReversedBinaryString(int binaryNumber)
{
	
	if(binaryNumber % 2 != 0)
	{
		binaryString += one;
		binaryNumber/= 2;
	}
	else
	{
		binaryString += zero;
		binaryNumber/= 2;
	}

	if(binaryNumber == 0)
		return binaryString;

	return getReversedBinaryString(binaryNumber);
}

string binaryHandler:: reverseString(string aString)
{
	string reversedString;
	for(int i = aString.length() - 1; i != -1; i--)
	{
		reversedString+= aString.at(i);
	}

	return reversedString;

}


int binaryHandler:: getDecimalValue(string aString)
{
	int decimal = 0;
	for(int i = 0; i < aString.length(); i++)
	{
		if(aString.at(i) == '1')
			decimal += pow(2, (aString.length()-1) - i);
		else
			continue;	
	}
	return decimal;
}



int main()
{

	int binaryNumber;
	cin >> binaryNumber;
	
	string binaryNumberStringReversed;
	string binaryNumberString;
	string binaryNumberTwo;

	binaryHandler binMan;

	binaryNumberStringReversed = binMan.getReversedBinaryString(binaryNumber);
	binaryNumberString = binMan.reverseString(binaryNumberStringReversed);
	binaryNumberTwo = binMan.reverseString(binaryNumberString);
	cout << binMan.getDecimalValue(binaryNumberTwo);

	


	


	return 0;
}





