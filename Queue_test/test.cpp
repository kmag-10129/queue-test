#include "pch.h"
#include "../Queue/Queue.h"

MyQueue test_queue; // used for testing with empty queue
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
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(2)); // add a 2
		EXPECT_EQ(SUCCESS, test_queue.Queue_add(1)); // add a 1
		EXPECT_EQ(2, test_queue.Queue_at_front()); // is the element at the front a 2?
	}

	// more significant test using the prefilled queue:
	// - check that the queue is NOT empty at the beginning
	// - append 1, 5, 9, 12
	// - dequeue five times
	// - check the size (should be 3)
	// - check the first item in the queue (should be five)
	TEST(EnvQueueTest, t_EnvTest1) {
		MyQueue env_queue_1({ 2,3,0,4 }); // used for testing with a prefilled queue
		EXPECT_FALSE(env_queue_1.Queue_empty()); // this should be false as on initialization queue is {2, 3, 0, 4}
		EXPECT_EQ(SUCCESS, env_queue_1.Queue_add(1)); // add a 1
		EXPECT_EQ(SUCCESS, env_queue_1.Queue_add(5)); // add a 5
		EXPECT_EQ(SUCCESS, env_queue_1.Queue_add(9)); // add a 9
		EXPECT_EQ(SUCCESS, env_queue_1.Queue_add(12)); // add a 12
		// dequeue five times
		for (int i = 0; i < 5; i++) {
			EXPECT_EQ(SUCCESS, env_queue_1.Queue_remove());
		}
		EXPECT_EQ(3, env_queue_1.Queue_get_size()); // size should be 3
		EXPECT_EQ(5, env_queue_1.Queue_at_front()); // is the element at the front a 5?
	}
}

