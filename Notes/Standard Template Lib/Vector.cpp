#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v; // creating a vector, {}

    // inserting values: there are two ways to do that
    v.push_back(10);
    v.emplace_back(20);

    vector<int> v1(3, 20); // creates a vector with 3 places that contains value 20
    vector<int> v2(v1); // copies v1 to v2, {20, 20, 20}
}

void accessingVector() {
    vector<int> v1, v2, v = {10, 20, 30, 40};
    cout << v[0] << endl;
    //v.begin() points to memory address of 10
    //v.end() points to address right after 40
    //v.rend() will reverse the vector {40, 30, 20, 10} and points to address just before 10
    //v.rbegin() will reverse the vector and point at 40 {40, 30, 20, 10}

    vector<int>::iterator it = v.begin();
    cout << *(it) << endl; //10
    it++; // moves to next element
    cout << *(it) << endl; //20

    // instead of writing vector<int>::iterator again and again we can simply use auto keyword that automatically puts datatype based on the value we provide.

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

    //v = {10, 20, 30, 40}
    v.erase(v.begin()+1); // deletes 20
    //v = {10, 20, 30, 40, 50, 60}
    v.erase(v.begin()+4, v.end()); //deletes [start, end) i.e. 50 and 60

    vector<int> v(1, 100); // {100}
    v.insert(v.begin(), 300); //{300, 100}
    v.insert(v.begin()+1, 2, 200); //{300, 200, 200, 100}

    //to copy one vector to another we can use insert()
    vector<int> copy(2, 400); //{400, 400}
    v.insert(v.begin()+1, copy.begin(), copy.end()); //{300, 400, 400, 200, 200, 100}

    v.size(); // returns the size of the vector
    v.pop_back(); // removes the last element
    //if we have 2 vectors v1 {1,2} and v2 {3,4} then
    v1.swap(v2); // this will swap v1 and v2 with each other. v1 {3,4} & v2 {1,2}
    v.clear(); //clears the entire vector

    cout << v.empty(); // checks whether the vector is empty or not and returns T/F
}