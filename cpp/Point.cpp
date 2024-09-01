#include <iostream>
#include <cmath>

struct Point {
    int x;
    int y;
};

void pointPrint(struct Point point) {
    std::cout << "(" << point.x << ", " << point.y << ")";
}

double pointDistance(struct Point a, struct Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}

bool pointEqual(struct Point a, struct Point b) {
    return a.x == b.x && a.y == b.y;
}

struct Point pointSum(struct Point a, struct Point b) {
    Point sum = a;

    sum.x += b.x;
    sum.y += b.y;

    return sum;
}

struct Point pointDiff(struct Point a, struct Point b) {
    Point diff = a;

    diff.x -= b.x;
    diff.y -= b.y;

    return diff;
}

int main() {
    struct Point a = {1, 10};
    struct Point b = {2, 4};
    struct Point c = pointSum(a, b);
    struct Point d = pointDiff(a, b);

    pointPrint(a);
    std::cout << std::endl;
    pointPrint(b);
    std::cout << std::endl;
    pointPrint(c);
    std::cout << std::endl;
    pointPrint(d);
    std::cout << std::endl;

    std::cout << pointDistance(a, b) << std::endl;
    std::cout << std::boolalpha << pointEqual(a, b) << std::endl;

    return 0;
}
