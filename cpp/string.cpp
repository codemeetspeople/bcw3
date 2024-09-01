#include <iostream>

using namespace std;

int main() {
    string str = "Hello!";

    cout << str << endl;
    cout << str.length() << endl;

    str += " World!";
    cout << str << endl;
    cout << str.length() << endl;
    cout << str.substr(0, 5) << endl;

    str.pop_back();
    cout << str << endl;

    str.push_back('?');
    cout << str << endl;
    cout << str[5] << endl;

    return 0;
}
