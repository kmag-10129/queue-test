#include "Queue.h"

bool MyQueue::Queue_empty(){
	// actual implementation
	return Elements.empty();
	//return false; // just so that the test can actually run. todo: implement
}

ExecStatus MyQueue::Queue_add(int input) {

	Elements.push_back(input);
	return SUCCESS;
	//return FAILURE; // just so that the test can actually run. todo: implement
}

int MyQueue::Queue_get_size() {
	return Elements.size();
	// return 0; // just so that the test can fail. todo: implement
}