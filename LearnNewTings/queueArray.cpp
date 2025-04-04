#include <iostream>
#include <vector>
using namespace std;

class que {
public:
    vector<int> arr;

    void push(int num) {
        arr.push_back(num);  // Use push_back instead of manually tracking size
    }

    void pop() {
        if (arr.empty()) {
            cout << "Empty queue" << endl;
        } else {
            arr.erase(arr.begin());  // Remove first element
        }
    }

    void front() {
        if (arr.empty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front element: " << arr[0] << endl;
        }
    }
};

int main() {
    que q;
    q.push(5);
    q.push(3);
    q.push(8);

    q.pop();
    q.pop();
    q.pop();
    q.pop();  // This will print "Empty queue"
    
    q.front();  // This will print "Queue is empty"

    return 0;
}
