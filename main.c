#include "point.h"

int main() {
	struct Point* p1 = createPoint(3, 4);
	struct Point* p2 = createPoint(1, 2);

	/**
	* E0393: Pointer to incomplete type is not allowed
	* p1->x = 10;
	* p1->y = 20;
	*/

	double distance = getDistance(p1, p2);
	return 0;
}