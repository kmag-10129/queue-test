#include "pch.h"
#include "../Queue/Queue.h"

MyQueue queue;
namespace QueueTest {
	// first test is to check if queue IS empty.
	TEST(QueueEmpty, t_QueueIsEmpty) {
		EXPECT_TRUE(queue.Queue_empty());
	}

	// next test is to check adding items to the end of the queue
	TEST(QueueAdd, t_AddOneElementSuccess) {
		EXPECT_EQ(SUCCESS, queue.Queue_add(1));
	}

	// next test is to check if queue IS NOT empty after adding elements
	TEST(QueueEmpty, t_QueueIsNotEmptyPostAdd) {
		EXPECT_EQ(SUCCESS, queue.Queue_add(1));
		EXPECT_FALSE(queue.Queue_empty());
	}

	// next test is to check the queue size
	TEST(QueueSize, t_QueueSizeCorrect) {
		EXPECT_EQ(SUCCESS, queue.Queue_add(1));
		EXPECT_EQ(1, queue.Queue_size());
	}

}

