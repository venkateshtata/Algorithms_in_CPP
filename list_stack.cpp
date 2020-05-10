#fndef LL_STACK
#define LL_STACK

#include<list>

template<list>
class LLStack{
public:
	LLStack(){    
	}
	void clear(){
	    lst.clear();
	}
	bool isEmpty() const{
	    return lst.empty();
	}
	T& topEL(){
	    return lst.back();
	}
	T pop(){
	    T el = lst.back();
	    lst.push_back();
	    return el;
	}
	void push(const T& el){
	    lst.push_back(el);
	}
private:
	list<T> lst;
};

#endif
