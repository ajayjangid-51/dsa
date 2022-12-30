// p16:
// 🎆 link: https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem?h_r=next-challenge&h_v=zen 🎆

#include <iostream>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }
};
class Equilateral : public Isosceles
{
public:
    void equilateral()
    {
        cout << "I am an equilateral triangle" << endl;
    }
};

int main()
{
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

// the better-version for the multiple-inheritance.
/*#include <iostream>
#include <memory> // std::unique_ptr, std::make_unique
#include <array>  // std::array

struct Shape
{
 // optional noexcept specifier
 virtual void triangle() const noexcept = 0;
 virtual ~Shape() = default;
};

struct Triangle : public Shape
{
  void triangle() const noexcept override {
  std::cout << "I am a triangle\n";
 }
};

struct Isosceles : public Triangle
{
  void triangle() const noexcept override {
  std::cout << "I am an isosceles triangle\n";
 }
};

struct Equilateral final : public Isosceles
{
  void triangle() const noexcept override {
  std::cout << "I am an equilateral triangle\n";
 }
};

int main()
{
 const std::array<std::unique_ptr<Shape>, 3> obj
 {
	 std::make_unique<Equilateral>(), // element 1
	 std::make_unique<Isosceles>(),   // element 2
	 std::make_unique<Triangle>()	 // element 3
 };
for (auto& it : obj)
	it->triangle();
 return 0;
}*/