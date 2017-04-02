//--------------------------------------
// Stack
//--------------------------------------
#pragma once
#include <iostream>
using namespace std;

#define MAX_STACK_SIZE 30

template <class S>
class Stack {
public:
	Stack(){
		this->size = -1;
		this->arr = new S[MAX_STACK_SIZE];
	};
	virtual ~Stack(){ delete [] arr; };
	
	// Push ............
	Stack& push(S elem){
		if( !this->isFull() ){
			this->size++;
			this->arr[this->size] = elem;
		}

		return *this;
	};
	
	// Pop ............
	S pop(){
		if( !this->isEmpty() )
			return this->arr[this->size--];
	};
	
	// isFull .........
	bool isFull() const {
		return this->size == MAX_STACK_SIZE;	
	};

	// isEmpty .........
	bool isEmpty() const {
		return this->size == -1;	
	};

private:
	S* arr;
	int size;
};