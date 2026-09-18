#include <iostream>
using namespace std;

int main() {
    string word;
    cout << "Word: ";
    cin >> word;
    
    cout << word << " -> ";
    int prev = 0;
    for (char c : word) {
        c = ::toupper(c); // convert to allcaps
        int order = int(c) - 64;
        int character = (order + prev) % 26;
        prev = order;
        cout << char(character + 64);
    }
    
    return 0;
}
