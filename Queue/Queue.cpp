#include "Queue.h"

bool MyQueue::Queue_empty(){
	// actual implementation
	return Elements.empty();
	//return false; // just so that the test can actually run. todo: implement
}

// original function
// todo: convert input int to string for compatibility
ExecStatus MyQueue::Queue_add(int input) {
	string inString = to_string(input);
	Elements.push_back(inString);
	return SUCCESS;
	//return FAILURE; // just so that the test can actually run. todo: implement
}

// overload function for string inputs
ExecStatus MyQueue::Queue_add(string input) {
	Elements.push_back(input);
	return SUCCESS;
	//return FAILURE; // just so that the test can actually run. todo: implement
}


int MyQueue::Queue_get_size() {
	return Elements.size();
	// return 0; // just so that the test can fail. todo: implement
}

ExecStatus MyQueue::Queue_remove() {
	Elements.erase(Elements.begin()); // note that we always want to remove the FIRST element when dequeue-ing.
	return SUCCESS;
	//return FAILURE; // just so that the test can actually run. todo: implement
}

// note: type had to be changed to reduce likelihood of invalid inputs being given.
string MyQueue::Queue_at_front() {
	return Elements.front();
}