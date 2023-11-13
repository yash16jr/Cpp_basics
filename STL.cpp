#include <iostream>
#include <vector>
#include <set>
#include <map>
#include<list>
#include<queue>
#include<functional>
#include<unordered_set>
#include <stack>
#include <algorithm>
#include<iostream>
using namespace std;

void using_pairs(){
    // Using pairs
    pair<int, int> p = {1, 3};
    cout << p.first << " " << endl;
    cout << p.second << endl;

    // Nested properties of pairs
    pair<int, pair<int, int> > p2 = {1, {3,5}};
    cout <<"p2.first is : " << p2.first << endl <<
    "P2. second.first is: " << p2.second.first << endl <<
    "P2.second.second is : " << p2.second.second << endl;
    
    // Pairs as arrays:
    pair<int, int> arr[] = {{1,3}, {3,5}, {5, 7}};
    cout << arr[0].first << " " << arr[0].second << endl;

}


void using_vectors(){
    // Vector is dynamic container {}
    vector<int> v;
    v.push_back(1);
    // emplace_back dynamically increases the size and is faster than push_back
    v.emplace_back(2);
    v.push_back(3);

    // Accessing the vector values
    vector<int>::iterator it = v.begin(); // Points at the beginning of the vector
    it ++;
    cout << *(it) << " "; // will only print 2 

    // OR iterate over the vector using iterator

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    // vector<int>::iterator can be replaced with auto
    
    // OR
    for (auto it : v){
        cout << it << " ";
    }

    vector<pair<int, int>> vec;
    // while using pushback with a pair, we have to use curly braces
    //pair<int, int> p1 = {7, 8};
    vec.push_back({7, 8});
    // emplace_back assumes the entry to be a pair
    vec.emplace_back(9,0);

    for (int i = 0 ; i < v.size(); i++){
        cout << v[i] << endl;
    }

    for (int i = 0 ; i < vec.size(); i++){
        cout << vec[i].first <<" " << vec[i].second << endl;
    }

    // Creating a prefilled vector
    // Creating vector with 5 values of 100
    vector<int> v_(5, 100);
    
    // Creating a copy of a vector
    vector<int> v2(v);

    // deletion in vector
    v.erase(v.begin());

    // Deleting multiple values
    v.erase(v.begin() + 1, v.begin()+4);
    // v.begin()+4 will not be deleted
    
    // Inserting a value
    v.insert(v.begin(), 300); // 300 will be inserted at first position
    
    // popping values
    v.pop_back(); // last value will be popped
    
    v.clear();
    
    return;

}


void using_lists(){

    // operations are cheaper as doubly linked list is maintained
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);

    // Most operations are similar to vectors
    return;
}


void using_deque(){
 deque<int> dq;
// similar functions to list and vector
return;

}

void using_stack(){
    stack<int> st;
    st.push(3);
    st.emplace(3);

    cout << st.top() << endl; // similar to peek
    st.pop();

    return;
}   

void using_queue(){
queue<int> q;

}

void using_PriorityQueue(){
    // largest value stays at the top of the queue : MAX HEAP
    priority_queue<int> pq;

    // we can alse store minimum value at the top: MIN HEAP
    priority_queue<int, vector<int>, greater<int>> min_pq; 

    return; 

}

void using_set(){
    // Sorted and unique values
    set<int> st = {1,2,3,4,5};
    //st.insert(6);

    // {1,2 3,5,6}
    auto it = st.find(5);
    cout << *it << endl;

    auto it2 = st.find(9);
    cout << *it2 << endl;

    return;
}

void using_multiset(){
    // Only sorted NOT unique values
    multiset<int> ms;
    return;
}

void using_unordered_set(){
    //Only unique values
    unordered_set<int> un_set;
     return;
}

void using_maps(){
// unique and sorted keys
// TC is O(logn) in all cases
map<int, int> m;
}



int main(){
    //using_set();
    return 0;
}