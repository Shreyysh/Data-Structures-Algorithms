#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map<string,int> mpp;

    //subject to marks
    mpp["physics"] = 78;
    mpp["mathematics"] = 94;

    //.emplace() puts the pair in front
    mpp.emplace("chemistry", 70);

    //it below is a pair
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    //to search for an element:
    if (mpp.find("physics") != mpp.end())
        cout << "target found" << endl;

    return 0;
}