#include <iostream>

using namespace std;

// Реализовать класс Pair, который позволяет использовать разные типы данных в передаваемых парах.
template<typename T, typename U>
class Pair {
	T part1;
	U part2;
    public:
        Pair(const T & p1, const U & p2):part1(p1),part2(p2) {}
        const T & first() const { return part1;}
        const U & second() const { return part2;}
};

template<typename F>
class Pair<F,int> {
	F part1;
	int part2;
    public:
        Pair(const F & p1, const int & p2):part1(p1),part2(p2) {}
        const F & first() const { return part1;}
        const int & second() const { return part2;}
};

template<typename H>
class Pair<H,double> {
	H part1;
	double part2;
    public:
        Pair(const H & p1, const double & p2):part1(p1),part2(p2) {}
        const H & first() const { return part1;}
        const double & second() const { return part2;}
};

int main(int argc, char ** argv) {

    Pair<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';




    return 0;	

}
