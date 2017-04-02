#include <iostream>
#include "Stack.h"

using namespace std;

void main(){
	Stack<int> st;

	st.push(1).push(2).push(3);

	while( !st.isEmpty() ){
		cout << st.pop() << endl;
	}

}