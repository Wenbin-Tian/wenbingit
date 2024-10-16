#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintHello() {
    string name = "twb";
    int age = 18;
    cout << "name: " << name << " , age = " << age << endl;
}


int main() {
    vector<int> arr;
    for(int i = 0; i < 10; ++i) {
        arr.push_back(i);
    }

    for(int i = 0; i < 10; ++i) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}