#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
    deque<int> dq1;
    dq1.push_front(1);
    dq1.push_front(2);
    dq1.push_back(3);
    dq1.push_back(4); //dq1 = (2 1 3 4)

    deque<int> dq2(dq1.begin()+1, dq1.end()-1); //dq2 = (1 3)
    dq[1] = 5;
    dq1.erase(dq1.begin());
    dq1.insert()dq1.end()-1, 2, 6;
    sort(dq1.begin(), dq1.end()); //dq1 = (3 4 5 6 6)

    deque<int> dq3;
    dq3.resize(dq1.size() + dq2.size()); //dq3 = (0 0 0 0 0 0 0)

    merge(dq1.begin(), dq2.end(), dq2.begin(), dq2.end(), dq.begin()); //dq1 = (3 4 5 6 6) and dq2 = (1 3); => dq3 = (1 3 3 4 5 6 6)
    return(0);
}
