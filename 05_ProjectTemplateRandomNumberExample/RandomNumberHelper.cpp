#include <cstdlib>
#include <ctime>

#include "RandomNumberHelper.h"

RandomNumberHelper::RandomNumberHelper()
{
	srand(time(NULL));
}

int RandomNumberHelper::getRandomInInclusiveRange(int min, int max)
{
	return rand() % (max + 1 - min) + min;
}
