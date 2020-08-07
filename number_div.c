#include "Compl_Calc.h"

struct ComplNumber number_dif(struct ComplNumber numberOne, struct ComplNumber numberTwo)
{
	struct ComplNumber result;
	result.realPart = numberOne.realPart - numberTwo.realPart;
	result.phantomPart = numberOne.phantomPart - numberTwo.phantomPart;
	return result;
}
