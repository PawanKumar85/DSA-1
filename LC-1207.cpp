#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr){
    unordered_map<int,int> mp;
    set<int> s;

    for(auto i : arr)
        mp[i]++;
    
    for(auto i : mp)
        s.insert(i.second);
    
    return s.size() == mp.size() ? 1 : 0;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    bool ans = uniqueOccurrences(arr);

    if(ans)
        cout << "True";
    else
        cout << "False";
    
    return 0;
}