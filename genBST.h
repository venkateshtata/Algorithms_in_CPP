#include<queue>
#include<stack>

using namespace std;

#ifndef NINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

//template<class T>
//class Stack : public stack<T>
//
template<class T>
class Queue : public queue<T>{
public:
	T dequeue(){
	    T tmp = front();
	    queue<T>::pop();
	    return tmp;
	}

	void enqueue(const T& el){
	    push(el);
	}
};

template<class T>
class BSTNode{
public:
	BSTNode(){
	    left = reight = 0;
	}

	BSTNode(const T& e, BSTNode<T> *l = 0, BSTNode<T> *r = 0){
	    el = e; left = l; right = r;
	}

	T el;
	BSTNode<T> *left, *right;
};

template<class T>
class BST{
public:
	BST(){
	    root = 0;
	}

	~BST(){
	    clear();
	}

	void clear(){
	    clear(root);
	    root = 0;
	}

	bool isEmpty() const{
	    return root == 0;
	}

	void preorder(){
	    preorder(root);
	}

	void inorder(){
	    inorder(root);
	}

	void postorder(){
	    postorder(root);
	}

	T* search(const T& el) const{
	    return search(root, el);
	}

	void breadthFirst();
	void iterativePreorder();
	void iterativeInorder();
	void iterativePostorder();
	void MorrisInorder();
	void insert(const T&);
	void deleteByMerging(BSTNode<T>*&);
	void findAndDeleteByMerging(const T&);
	void deleteByCopying(BSTNode<T>*&);
	void balance(T*, int, int);

protected:
	BSTNode<T>* root;
	void clear(BSTNode<T>*);
	T* search(BSTNode<T>*, const T&) const;
	void preorder(BSTNode<T>*);
	void inorder(BSTNode<T>*);
	void postorder(BSTNode<T>* p){
	    cout << p-> el << ' ';
	}
};

template<classT>
void BST<T>::inorder(BSTNode<T> +p){
    if(p!=0){
         inorder(p->left);
	 visit(p);
	 inorder(p->right);
    }
}

template<class T>
void BST<T>::preorder(BSTNode<T> *p){
	if(p != 0){
	    visit(p);
	    preorder(p->left);
	    preorder(p->right);
	}
}

template<class T>
void BST<T>::postorder(BSTNode<T> *p){
    if(p!=0){
        postorder(p->left);
	postorder(p->right);
	visit(p);
    }
}



#endif
