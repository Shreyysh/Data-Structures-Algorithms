#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p = {1, 2}; // creating a pair

    // accessing elements of a pair
    cout << "First elt: " << p.first << "\nSecond elt: " << p.second << endl;

    //nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    // to access 2&3: p1.second.first & p1.second.second

    //array of pair
    pair<int, int> arr[] = {{1,2}, {3,4}};

    pair<int, int> p2, p3;
    p2 = make_pair(1, 2); // make_pair can be used to assign values
    // or
    p3 = pair<int, int>({1, 2});
    cout << p2.first << " " << p3.second << endl;
}

void explainList() {
    list<int> ls; // creating a list {}

    //inserting elements
    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}

    ls.push_front(0); // adds element directly to the front {0,1,2}
    ls.emplace_front(3); //{3,0,1,2}

    //rest of the functions are same as vectors
}

void explainDeque() {
    deque<int> dq;
    //push, emplace functions same as list

    dq.pop_back(); //removes last element
    dq.pop_front(); //removes first element
    
    dq.back(); //returns a reference to last element
    dq.front(); //returns a reference to first element

    //rest functions are same as vector
}

void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}

    st.top(); // returns 4 
    st.pop(); // deletes 4 
    st.top(); // returns 3

    st.size(); // size of stack
    st.empty(); // checks whether stack is empty or not

    stack<int> s1, s2;
    s1.swap(s2); // simply swaps the two stacks with one another
}

// queue works on first in first out principle
void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2);
    q.emplace(4); // {1, 4}

    q.back() += 5;
    cout << q.back(); // prints 4+5 i.e. 9
    cout << q.front(); // prints 1

    q.pop(); // {4}

    // size, swap same as stack
}

void explainPQ() {
    //PQ is priority queue: largest element at top
    priority_queue<int> PQ;

    PQ.push(10); // {10}
    PQ.push(11); // {11, 10}

    // 11 is the largest hence it is the top element
    // rest all is same
    
    // minimum heap
    priority_queue<int, vector<int>, greater<int>> PQ1; 
    // smallest element is given the priority   
}

void explainSet() {
    set<int> st;

    st.emplace(1); //{1}
    st.insert(3); //{1, 3}
    st.insert(2); // {1, 2, 3}

    auto it = st.find(3); //returns an iterator pointing to 3
    auto it = st.find(7); //since 7 is not in the set it returns st.end()
}