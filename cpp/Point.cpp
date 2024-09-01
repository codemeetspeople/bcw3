#include <iostream>
#include <cmath>

struct Point {
    int x;
    int y;

    Point() {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    double distance(const struct Point& other) const {
        return hypot(this->x-other.x, this->y-other.y);
    }

    bool operator==(const struct Point& other) const {
        return this->x == other.x && this->y == other.y;
    }

    bool operator!=(const struct Point& other) const {
        return !(*this == other);
    }

    struct Point operator+(const struct Point& other) const {
        return Point(this->x+other.x, this->y+other.y);
    }

    struct Point operator-(const struct Point& other) const {
        return Point(this->x-other.x, this->y-other.y);
    }
};

std::ostream& operator<<(std::ostream& out, const struct Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

int main() {
    struct Point a;
    struct Point b = Point(1, 10);
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;

    return 0;
}
