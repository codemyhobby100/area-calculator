#include <iostream>
#include <cmath> // for pi and the pow function

class Area {
 public:
  // method for calculating the area of a square
  double Square(double side) {
    return side * side;
  }

  // method for calculating the area of a triangle
  double Triangle(double base, double height) {
    return 0.5 * base * height;
  }

  // method for calculating the area of a circle
  double Circle(double radius) {
    return M_PI * std::pow(radius, 2);
  }
};

int main() {
  Area area; // create an object of the Area class

  // call the methods and pass in the necessary arguments
  std::cout << "Area of square: " << area.Square(5) << std::endl;
  std::cout << "Area of triangle: " << area.Triangle(5, 7) << std::endl;
  std::cout << "Area of circle: " << area.Circle(5) << std::endl;

  return 0;
}
