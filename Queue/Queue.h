#pragma once
#include <vector>

using namespace std;

class MyQueue 
{
	private:
		// vector is used here so that the size of the queue can dynamically change
		// ie, we can ALWAYS add new integer elements to the queue
		vector<int> Elements;

	public:
		// is queue empty function:
		// should return true if the Queue object has no elements in it, otherwise return false
		bool Queue_empty();
};