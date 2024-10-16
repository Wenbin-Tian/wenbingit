#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> arr = {"twb", "lixiaoben", "tianwenjun", "lihaofen"};
    for(int i = 1; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}