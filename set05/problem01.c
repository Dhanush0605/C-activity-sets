#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main() {
    Point a, b;
    float result;

    printf("Enter coordinates of first point (x y): ");
    a = input();

    printf("Enter coordinates of second point (x y): ");
    b = input();

    dist(a, b, &result);
    output(a, b, result);

    return 0;
}

Point input() {
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void output(Point a, Point b, float res) {
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f\n", a.x, a.y, b.x, b.y, res);
}
