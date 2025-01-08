#include <iostream>
#include <cstring>
using namespace std;

class Play {
private:
    int Playcode;
    char PlayTitle[26];
    float Duration;
    int Noofscenes;

public:
    Play() : Duration(45), Noofscenes(5) {}

    void Newplay(int Playcode,const char *Playtitle) {
        this->Playcode = Playcode;
        strcpy(this->PlayTitle, Playtitle);
        this->PlayTitle[sizeof(this->PlayTitle) - 1] = '\0'; // Ensure null-termination
    }

    void Moreinfo(float Duration, int Noofscenes) {
        this->Duration = Duration;
        this->Noofscenes = Noofscenes;
    }

    void Showplay() {
        cout << "Play Code: " << Playcode << endl;
        cout << "Play Title: " << PlayTitle << endl;
        cout << "Duration: " << Duration << " minutes" << endl;
        cout << "Number of Scenes: " << Noofscenes << endl;
    }
};

int main() {
    Play play1;
    play1.Newplay(101, "Hamlet");
    cout << "Play 1:" << endl;
    play1.Showplay();

    Play play2;
    play2.Newplay(102, "Romeo and Juliet");
    play2.Moreinfo(120, 7);
    cout << "\nPlay 2:" << endl;play2.Showplay();

    return 0;
}
