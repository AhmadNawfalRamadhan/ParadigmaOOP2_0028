#include <iostream>
using namespace std;

class baseClass final {
    public :
        virtual void perkenalan() {
            cout << "Hallo saya Function dari base Class";
        }
};

class derivedClass : public baseClass {
    public :
        void perkenalan() {
            cout << "hallo saya Function dari derived class";
        }
};