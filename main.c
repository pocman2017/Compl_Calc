#include "Compl_Calc.h"

int main()
{
	struct ComplNumber numberOne;
	numberOne.realPart = 4;
	numberOne.phantomPart = 3;
		
	struct ComplNumber numberTwo;
	numberTwo.realPart = 6;
	numberTwo.phantomPart = 7;
	struct ComplNumber resultOne = number_add(numberOne, numberTwo);
	struct ComplNumber resultTwo = number_dif(numberOne, numberTwo);
	printf("resultOne: %d | %d\n", resultOne.realPart, resultOne.phantomPart);
	printf("resultTwo: %d | %d\n", resultTwo.realPart, resultTwo.phantomPart);
	return 0;
}


