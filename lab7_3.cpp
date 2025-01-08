#include <iostream>
using namespace std;

class THREE {
private:
    int num1, num2, num3;

    friend void findBiggest(THREE&);
    friend void findMean(THREE&);

public:
    THREE(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}
};

void findBiggest(THREE& obj) {
    int biggest = obj.num1;
    if (obj.num2 > biggest)
        biggest = obj.num2;
    if (obj.num3 > biggest)
        biggest = obj.num3;
    cout << "Biggest number: " << biggest << endl;
}

void findMean(THREE& obj) {
    float mean = (obj.num1 + obj.num2 + obj.num3) / 3.0;
    cout << "Mean of the three numbers: " << mean << endl;
}

int main() {
    THREE obj(10, 20, 30);

    findBiggest(obj);
    findMean(obj);

    return 0;
}
