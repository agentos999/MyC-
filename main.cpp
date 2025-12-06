#include <iostream>
using namespace std;

void GreetUser(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    cout << "Hello, World!" << endl;
    GreetUser("User");
    return 0;
}
