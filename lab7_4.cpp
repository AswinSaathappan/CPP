#include <iostream>

using namespace std;

class DF; // Forward declaration of class DF

class DM {
private:
    int meters;
    float centimeters;

public:
    DM() : meters(0), centimeters(0) {}
    DM(int m, float cm) : meters(m), centimeters(cm) {}

    friend DM add(DM&, DF&);

    void displayMetersCentimeters() {
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n";
    }

    void convertToFeetInches() {
        float total_inches = meters * 39.3701 + centimeters * 0.393701;
        int feet = total_inches / 12;
        float inches = total_inches - feet * 12;
        cout << "Distance: " << feet << " feet and " << inches << " inches\n";
    }
};

class DF {
private:
    int feet;
    float inches;

public:
    DF() : feet(0), inches(0) {}
    DF(int f, float in) : feet(f), inches(in) {}

    friend DM add(DM&, DF&);
	void displayFeetInches() {
        cout << "Distance: " << feet << " feet and " << inches << " inches\n";
    }

   /*void convertToMetersCentimeters() {
        float total_cm = feet * 12 * 2.5400013716 + inches * 2.5400013716;
        int meters = total_cm / 100;
        float centimeters = total_cm - meters * 100;
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n";
    }*/
};

DM add(DM& dm, DF& df) {
    float total_cm = dm.meters * 100 + dm.centimeters + df.feet * 12 * 2.5400013716 + df.inches * 2.5400013716;
    int meters = total_cm / 100;
    float centimeters = total_cm - meters * 100;
    return DM(meters, centimeters);
}

int main() {
    int choice;
    cout << "Enter 1 for meters and centimeters or 2 for feet and inches: ";
    cin >> choice;

    if (choice == 1) {
        int m1, cm1, m2, cm2;
        cout << "Enter distance in meters and centimeters for first object: ";
        cin >> m1 >> cm1;
        DM dm1(m1, cm1);
        cout << "Enter distance in feet and inches for second object: ";
        cin >> m2 >> cm2;
        DF df1(m2, cm2);

        DM result = add(dm1, df1);
        result.displayMetersCentimeters();} else if (choice == 2) {
        int f1, in1, f2, in2;
        cout << "Enter distance in feet and inches for first object: ";
        cin >> f1 >> in1;
        DF df1(f1, in1);
        cout << "Enter distance in meters and centimeters for second object: ";
        cin >> f2 >> in2;
        DM dm1(f2, in2);

        DM result = add(dm1, df1);
        result.convertToFeetInches();
    } else {
        cout << "Invalid choice";
    }

    return 0;
}
