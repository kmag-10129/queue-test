#pragma once
#include <vector>
#include <string>

using namespace std;

enum ExecStatus {
	SUCCESS,
	FAILURE,
	ERROR
};

class MyQueue 
{
	private:
		// vector is used here so that the size of the queue can dynamically change
		// ie, we can ALWAYS add new integer elements to the queue
		vector<string> Elements;

	public:
		// empty constructor
		MyQueue(){
		
		}

		// constructor for when there's input elements available
		MyQueue(vector<string> inputElems) {
			Elements = inputElems;
		}

		// is queue empty function:
		// should return true if the Queue object has no elements in it, otherwise return false
		bool Queue_empty();

		// add to queue function:
		// adds the input as the LAST element in the queue.
		// (modified to accept as string input in cpp)
		ExecStatus Queue_add(int input);

		// add to queue function:
		// adds the input as the LAST element in the queue.
		// (overload accepting string input)
		ExecStatus Queue_add(string input);

		// remove from queue function
		// removes the FIRST element in the queue.
		ExecStatus Queue_remove();

		// get queue size function
		int Queue_get_size();

		// get first element in the queue
		string Queue_at_front();
};