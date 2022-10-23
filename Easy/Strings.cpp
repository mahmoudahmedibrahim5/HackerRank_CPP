#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
    cin >> A >> B;
    
    int lenA, lenB;
    lenA = A.size();
    lenB = B.size();
    
    cout << lenA << " " << lenB << endl;
    cout << A+B << endl;
    
    char firstA, firstB;
    firstA = A[0];
    firstB = B[0];
    A[0] = firstB;
    B[0] = firstA;
    cout << A << " " << B << endl;
    
    return 0;
}
