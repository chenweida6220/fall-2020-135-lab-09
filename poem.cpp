// Task D. Fix the program so that it does not crash your computer:
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // keep creating
        cout << *p << endl;

        //assume that the poem p is not needed at this point
        delete p;
    }
}
