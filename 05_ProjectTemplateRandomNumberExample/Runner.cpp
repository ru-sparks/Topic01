#include <iostream>
#include "Runner.h"
#include "RandomNumberHelper.h"

using namespace std;

void Runner::Run()
{
	cout << "Hello" << endl;
	RandomNumberHelper random = RandomNumberHelper();

	auto sum = 0;
	for (auto i = 0; i < 100; i++) {
		int r = random.getRandomInInclusiveRange(1, 1000);
		cout << r << endl;
		sum += r;
	}

	cout << "average: " << sum / 100 << endl;
}
