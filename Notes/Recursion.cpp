#include <bits/stdc++.h>
using namespace std;

void infinite_recursion() {
    cout << "Hello, World" << endl;
    infinite_recursion();
}

// a finite recursion has a base case and when true it finishes the execution of that function and other waiting in stack space.
void finite_recursion(int cnt) {
    if (cnt == 5) return; // base case

    cout << cnt << endl;
    finite_recursion(cnt+1);
}

int main(void) {
    infinite_recursion(); // will result in stack overflow (segmentation error)

    int cnt = 0;
    finite_recursion(cnt); // will return when cnt == 5
    return 0;
}