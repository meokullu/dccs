/*
 Name:		DigitChangeClearScreen.ino
 Created:	01-May-16 8:27:34 PM
 Author:	MEO
 */

int numberofdigit = 0;
int numberofdigittemp = 0;

// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {

}

void dccs(int dcgsdigit)
{
	do
	{
		dcgsdigit /= 10;
		numberofdigit++;
	} while (dcgsdigit != 0);

	if (numberofdigit!=numberofdigittemp)
	{
		//action
	}
	numberofdigittemp = numberofdigit;

}

void dccs(double dcgsdigit)
{
	do
	{
		dcgsdigit /= 10;
		numberofdigit++;
	} while (dcgsdigit != 0);

	if (numberofdigit != numberofdigittemp)
	{
		//action
	}
	numberofdigittemp = numberofdigit;
}

void dccs(float dcgsdigit)
{
	do
	{
		dcgsdigit /= 10;
		numberofdigit++;
	} while (dcgsdigit != 0);

	if (numberofdigit != numberofdigittemp)
	{
		//action
	}
	numberofdigittemp = numberofdigit;
}

