#include <iostream>

using namespace std;

//Реализовать шаблон класса Pair1, который позволяет пользователю передавать данные одного типа парами.
template<typename T>
class Pair1 {
	T part1;
	T part2;
    public:
        Pair1(const T & p1, const T & p2):part1(p1),part2(p2) {}
        const T & first() const { return part1;}
        const T & second() const { return part2;}
};

int main(int argc, char ** argv) {

    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';



    return 0;	

}
