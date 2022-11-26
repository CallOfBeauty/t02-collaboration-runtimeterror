/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    TODO: Lawrence Hoerst -- to be added by student 1
    TODO: <Dimitrios Ntentia> -- to be added by student 2

 */
#include <iostream> 
using namespace std;

int main() {

    int ducknum;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;

    for (int i = 0; i < ducknum; i++) { 
        cout << "               n n " << endl; // TODO: student 1 may change this line and may add additional lines immediately above
        cout << "             c     b" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
        cout << "             c     b( .__> /" << endl; // student 3(2) may change this line
        cout << "               n  n     `----' " << endl; // TODO student 2 may change this line and may add lines below
        cout << "                ||        ";
        cout << "              o ||" << endl;
        cout << "               \|| o" << endl;
        cout << "                ||/" << endl;
        cout << "                ||" << endl;
        cout << "               |__|" << endl;
        cout << "        -----------------" << endl;
           
    }

    return 0;
}