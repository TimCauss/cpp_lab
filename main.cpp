#include <iostream>
using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int temp[] = {a, b, c, d};
    int max = 0;
    for (int i : temp) {
        if (max < i) {
            max = i;
        }
    }
    return max;
}

int main() {
    cout << max_of_four(10, 20, 30, 45);
}

