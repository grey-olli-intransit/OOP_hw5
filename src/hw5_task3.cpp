#include <iostream>
#include <string>

using namespace std;

// Написать шаблон класса StringValuePair, в котором первое значение всегда типа string, а второе — любого типа.
// Этот шаблон класса должен наследовать частично специализированный класс Pair, в котором первый параметр — string,
//  а второй — любого типа данных.

template<typename A,typename B>
class Pair {
	A part1;
	B part2;
    public:
        Pair(const A & p1, const B & p2):part1(p1),part2(p2) {}
        const A & first() const { return part1;}
        const B & second() const { return part2;}
};

template<typename U> 
class Pair<string,U> {
	string part1;
	U part2;
    public:
        Pair(const string & p1, const U & p2):part1(p1),part2(p2) {}
        const string & first() const { return part1;}
        const U & second() const { return part2;}
};


template<typename X>
class StringValuePair: public Pair<string,X> {
    public:
        StringValuePair(const string & s, const X & p): Pair<string,X>(s,p) {}
};

int main(int argc, char ** argv) {

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;	

}
