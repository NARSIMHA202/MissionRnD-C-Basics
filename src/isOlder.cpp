/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i = 0, temp = 0, day1 = 0, day2 = 0, month1 = 0, month2 = 0, year1 = 0, year2 = 0;

	while (dob1[i] != '\0' && dob2[i] != '\0')
	{
		i++;
	}
	if (i == 10)
	{
		i = 0;
		while (i < 2)
		{
			temp = dob1[i] - '0';

			if (temp >= 0 && temp <= 9)
			{
				day1 = day1 * 10 + temp;

			}
			else
				return -1;
			temp = dob2[i] - '0';
			if (temp >= 0 && temp <= 9)

			{

				day2 = day2 * 10 + temp;
			}
			else
				return -1;
			i++;
		}
		i = 3;
		while (i < 5)
		{
			temp = dob1[i] - '0';
			if (temp >= 0 && temp <= 9)

			{

				month1 = month1 * 10 + temp;
			}
			else
				return -1;
			temp = dob2[i] - '0';
			if (temp >= 0 && temp <= 9)

			{
				month2 = month2 * 10 + temp;
			}
			else
				return -1;
			i++;

		}
		i = 6;
		while (i < 10)
		{
			temp = dob1[i] - '0';
			if (temp >= 0 && temp <= 9)

			{
				year1 = year1 * 10 + temp;
			}
			else
				return -1;
			temp = dob2[i] - '0';
			if (temp >= 0 && temp <= 9)
			{

				year2 = year2 * 10 + temp;
			}
			else
				return -1;
			i++;
		}
		if (year1 == 0 || year2 == 0 || day1 == 0 || day2 == 0 || month1 == 0 || month2 == 0)
			return -1;
		if (year1 % 4 != 0){
			if (month1 == 2 && day1 > 28)
				return -1;
		}
		if (year2 % 4 != 0){
			if (month2 == 2 && day2 > 28)
				return -1;
		}

		if (year1 == year2){


			if (month1 == month2)
			{
				if (day1 == day2)
					return 0;
			}
		}

		else if (year1 > year2)
			return 2;
		else
			return 1;
	}
	return -1;


}