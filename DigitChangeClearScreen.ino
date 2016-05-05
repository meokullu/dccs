/*
 Name:		DigitChangeClearScreen.ino
 Created:	01-May-16 8:27:34 PM
 Author:	MEO
 */

int numberofdigit = 0;
int numberofdigittemp = 0;

int negativeflag = 0;
// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {

}

void dccs(int dcgsdigit) //sign digit
{
	numberofdigit = 0; // number of digit
	negativeflag = 0; // negative flag for negative numbers

	if (dcgsdigit < 0) // checking number for being negative
	{
		negativeflag = 1; //flagging here for compare it with positive number with same digit eg. -20, +80
	}

	do //counting digits here
	{
		dcgsdigit /= 10;
		numberofdigit++;
	} while (dcgsdigit != 0);

	if (negativeflag == 1)
	{
		numberofdigit = numberofdigit * (-1);
	}

	if (numberofdigittemp!=0)
	{ 
		if (numberofdigit != numberofdigittemp)
		{
			//action
		}
		else
		{
			//optional action
		}
	}
	numberofdigittemp = numberofdigit;
}

void dccs(int dcgsdigit) //sign of number is not important
{
	numberofdigit = 0; // number of digit
	
	do //counting digits here
	{
		dcgsdigit /= 10;
		numberofdigit++;
	} while (dcgsdigit != 0);

		if (numberofdigit != numberofdigittemp)
		{
			//action
		}
		else
		{
			//optional action
		}
	numberofdigittemp = numberofdigit;
}
