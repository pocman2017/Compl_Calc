#pragma once
#include <stdio.h>

struct ComplNumber
{
	int realPart;
	int phantomPart;
};

extern struct ComplNumber number_add(struct ComplNumber numberOne, struct ComplNumber numberTwo);
extern struct ComplNumber number_dif(struct ComplNumber numberOne, struct ComplNumber numberTwo);

