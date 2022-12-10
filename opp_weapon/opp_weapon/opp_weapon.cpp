#include <iostream>
using namespace std;

class Weapon {
private:
    int shotRange;
    float caliber;
    int numBullet;
    int maxNumBullet;
public:
    Weapon() {
        this->shotRange = 0;
        this->caliber = 0;
        this->numBullet = 0;
        this->maxNumBullet = 0;
    }
    Weapon(int shotRange, int caliber, int numBullet, int maxNumBullet)
        : shotRange(shotRange), caliber(caliber), numBullet(numBullet),
        maxNumBullet(maxNumBullet) {

    }

    void Show() const {
        cout << "\n_______ WEAPON ________" << endl;
        cout << "Shot range: " << shotRange << endl;
        cout << "Caliber bullets: " << caliber << endl;
        cout << "Number bullets: " << numBullet << endl;
        cout << "Max number bullets in magazine: " << maxNumBullet << endl;
    }

};

int main()
{
    Weapon ww(909, 5.7, 19, 32);
    ww.Show();
    


}