#include <iostream>
using namespace std;
int stepCount = 0;
void towerOfHanoi(int n, char S, char D, char A) {
    if (n == 1) {
        stepCount++; 
        cout << "Move disk 1 from " << S << " to " << D << endl;
        return;
    }
    // Step 1: Move n-1 disks from Source (S) to Auxiliary (A) using Destination (D)
    towerOfHanoi(n - 1, S, A, D);
    
    // Step 2: Move the nth disk from Source (S) to Destination (D)
    stepCount++;
    cout << "Move disk " << n << " from " << S << " to " << D << endl;
    
    // Step 3: Move n-1 disks from Auxiliary (A) to Destination (D) using Source (S)
    towerOfHanoi(n - 1, A, D, S);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'S', 'D', 'A');  // S = Source, D = Destination, A = Auxiliary
    cout << "Total number of steps required: " << stepCount << endl;
    
    return 0;
}
