//Use of map container in STL

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    map<int, string> roll_call;
    roll_call[1] = "Adi";
    roll_call[2] = "Bunty";
    roll_call[3] = "Chimu";
    roll_call[4] = "Dipu";

    map<int, string>::iterator it;
    for(it = roll_call.begin(); it != roll_call.end(); it++) {
        cout << (*it).first << " --> " << (*it).second << endl;
    }

    return 0;
}
