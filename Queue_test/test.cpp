#include "pch.h"
#include "../Queue/Queue.h"

MyQueue test_queue; // used for testing with empty queue
MyQueue env_queue_1({ 2,3,0,4 }); // used for testing with a prefilled queue
namespace QueueTest {
	// first test is to check if queue IS empty.
	TEST(QueueEmpty, t_QueueIsEmpty) {
		EXPECT_TRUE(test_queue.Queue_empty());
	}

	// next test is to check adding items to the end of the queue
	TEST(QueueAdd, t_AddOneElementSuccess) {
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(1));
	}

	// next test is to check if queue IS NOT empty after adding elements
	TEST(QueueEmpty, t_QueueIsNotEmptyPostAdd) {
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(1));
		EXPECT_FALSE(test_queue.Queue_empty());
	}

	// next test is to check the queue size
	TEST(QueueSize, t_QueueSizeCorrect) {
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(1));
		EXPECT_EQ(1, test_queue.Queue_get_size());
	}

	// next test is to remove an item from the front of the queue
	TEST(QueueAdd, t_DequeueElementSuccess) {
		EXPECT_EQ(SUCCESS, test_queue.Queue_remove());
		EXPECT_TRUE(test_queue.Queue_empty()); // if the queue is empty once item has been removed then the dequeue worked
	}

	// next test is to check the first element of the queue
	TEST(QueueAdd, t_QueueFrontCheckSuccess) {
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(1)); // add a 1
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(2)); // add a 2
		EXPECT_EQ(1, test_queue.Queue_at_front()); // is the element at the front a 1?
	}

}

