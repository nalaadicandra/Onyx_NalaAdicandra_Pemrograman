#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // Number of Astronauts
    cout << "No. of Astronauts: ";
    cin >> n;
    
    int k; // Interval
    cout << "Interval: ";
    cin >> k;
    
    int idx = 0;
    vector<int> queue;
    vector<int> order;
    
    for (int i = 1; i < n+1; i++) { queue.push_back(i); } 
    
    while (queue.size() > 1) {
        idx = (idx + k - 1) % queue.size();
        int astro = queue[idx];
        order.push_back(astro);
        
        if (astro % 2 == 0) {
            k += 2;
        } else {
            if ((k-1) < 2) {
                k = 2;
            } else { k--; }
        }
        
        queue.erase(queue.begin() + idx);
    }
    
    cout << "--- OUTPUT ---" << endl;
    
    cout << "Order: ";
    for (int i = 0; i < order.size(); i++) {
        cout << order[i] << " ";
    }
    
    cout << endl << "Last Survivor: " << queue[0] << endl;
    return 0;
}
