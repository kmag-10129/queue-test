#include "pch.h"
#include "../Queue/Queue.h"

MyQueue queue;
namespace QueueTest {
	// first test is to check if queue IS empty.
	TEST(QueueEmpty, t_QueueIsEmpty) {
		EXPECT_TRUE(queue.Queue_empty());
	}
}

