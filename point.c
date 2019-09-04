#include "point.h"

#include <stdio.h>
#include <math.h>

struct Point {
	double x;
	double y;
};

struct Point* createPoint(double x, double y) {
	struct Point* point = malloc(sizeof(struct Point));
	point->x = x;
	point->y = y;

	return point;
}

double getDistance(struct Point* p1, struct Point* p2) {
	double dx = p1->x - p2->x;
	double dy = p1->y - p2->y;

	return sqrt(dx * dx + dy * dy);
}
