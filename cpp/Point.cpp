#include <iostream>
#include <cmath>

typedef struct {
    double x;
    double y;
} Point;

bool operator==(const Point& a, const Point& b) {
    return a.x == b.x && a.y == b.y;
}

bool operator!=(const Point& a, const Point& b) {
    return a.x != b.x || a.y != b.y;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << '(' << point.x << ", " << point.y << ')';
    return out;
}

double distance(const Point& a, const Point& b) {
    return hypot(a.x+b.x, a.y+b.y);
}

int main() {
    Point x = {1, 0};
    Point y = {2, 7};

    if ( x != y ) {
        std::cout << x << " is not equal to " << y << std::endl;
    } else {
        std::cout << x << " is equal to " << y << std::endl;
    }

    std::cout << distance(x, y) << std::endl;
    
    return 0;
}