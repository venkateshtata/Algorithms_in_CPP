#include<iostream>
#include<list>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    list<int> lst1; // as empty list
    list<int> lst2(3,7); // lst2 = (7 7 7)
    for(int j=1; j<=5; j++){ //lst1 = (1 2 3 4 5)
        lst1.push_back(j);
    }
    list<int>::iterator il = lst1.begin(), i2 = il, i3;
    i2++; i2++; i2++;
    
    list<int> lst3(++il, i2); //lst3 = (2 3)
    
    list<int> lst4(lst1); //lst4 = (1 2 3 4 5)
    
    il = lst4.begin();
    lst4.splice(++il, lst2); //lst2 is empty; lst4 = (1 7 7 7 2 3 4 5);

    lst2 = lst1; //lst2 = (1 2 3 4 5)
    i2 = lst2.begin();
    lst4.splice(il, lst2, ++i2); //lst2 = (1 3 4 5), lst4 = (1 7 7 7 2 2 3 4 5)

    i2 = lst2.begin();
    i3 = i2;
    lst4.splice(il, lst2, i2, ++i3); //lst2 = (3 4 5); 

    lst4.remove(1); //lst4 = (1 7 7 7 2 1 2 3 4 5); lst4 = (7 7 7 2 2 3 4 5)
    
    lst4.sort(); //lst4 = (2 2 3 4 5 7 7 7)
    
    lst4.unique(); //lst4 = (2 3 4 5 7)
    
    lst1.merge(lst2); //lst2 = (1 2 3 3 4 4 5 5)

    lst3.remove_if(bind2nd(not_equal_to<int>(), 3)); //lst3 = (3,3)
    
    lst3.unique(not_equal_to<int>()); //lst3 = (3 3)
    
    return 0;

}

