#include <iostream>
#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LQueue/LQueue.h"
#include "../src/LQueue/Node.h"
#include "../src/ListQueue/ListQueue.h"
#include <list>
#include <ctime>

using std::cout;
using std::endl;

TEST(AQueueTest, Init) {
  AQueue* q = new AQueue();
  EXPECT_EQ(true,q->isEmpty());
  delete q;
}

TEST(AQueueTest, EnqueueTest) {
  AQueue* q = new AQueue(3);
  q->enqueue(5);
  q->enqueue(3);
  q->enqueue(2);
  q->enqueue(77);
  q->enqueue(2);
  EXPECT_EQ(5,q->dequeue());
  q->enqueue(7);
  EXPECT_EQ(3,q->dequeue());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(77,q->dequeue());
  EXPECT_EQ(2,q->size());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(1,q->size());
  delete q;
} 

TEST(AQueueTest, DequeueTest) {
  AQueue* q = new AQueue();
  //EXPECT_EQ(0,q->dequeue()); //this should fail.
  q->enqueue(3);
  EXPECT_EQ(3,q->dequeue());
  delete q;
}

TEST(AQueueTest, isEmptyTest) {
  AQueue* q = new AQueue(10);
  EXPECT_EQ(true,q->isEmpty());
  q->enqueue(5);
  EXPECT_EQ(false, q->isEmpty());
  q->dequeue();
  EXPECT_EQ(true, q->isEmpty());
  delete q;
}

TEST(AQueueTest, SizeTest) {
  AQueue* q = new AQueue(100);
  EXPECT_EQ(0,q->size());
  
  q->enqueue(5);
  q->enqueue(2);
  EXPECT_EQ(2,q->size());
  q->dequeue();  
  q->dequeue();
  EXPECT_EQ(0, q->size());

  for(int i = 0; i< 105; i = i + 2) {
    q->enqueue(i);
    if(i%7==0) {
      EXPECT_EQ(i/2+1,q->size());
    }
  }
  q->dequeue();
  EXPECT_EQ(52, q->size());
  delete q;
}

TEST(LQueueTest, Init) {
  LQueue* q = new LQueue();
  EXPECT_EQ(true,q->isEmpty());
  EXPECT_EQ(0,q->size());
  delete q;
}

TEST(LQueueTest, EnqueueTest) {
  LQueue* q = new LQueue();
  q->enqueue(5);
  q->enqueue(3);
  q->enqueue(2);
  q->enqueue(77);
  q->enqueue(2);
  EXPECT_EQ(5,q->dequeue());
  q->enqueue(7);
  EXPECT_EQ(3,q->dequeue());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(77,q->dequeue());
  EXPECT_EQ(2,q->size());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(1,q->size());
  delete q; 
}

TEST(LQueueTest, DequeueTest) {
  LQueue* q = new LQueue();
  //EXPECT_EQ(0,q->dequeue()); //this should fail.
  q->enqueue(3);
  EXPECT_EQ(3,q->dequeue());
  delete q;
}

TEST(LQueueTest, isEmptyTest) {
  LQueue* q = new LQueue();
  EXPECT_EQ(true,q->isEmpty());
  q->enqueue(5);
  EXPECT_EQ(false, q->isEmpty());
  q->dequeue();
  EXPECT_EQ(true, q->isEmpty());
  delete q;
}

TEST(LQueueTest, SizeTest) {
  LQueue* q = new LQueue();
  EXPECT_EQ(0,q->size());
  
  q->enqueue(5);
  q->enqueue(2);
  EXPECT_EQ(2,q->size());
  q->dequeue();  
  q->dequeue();
  EXPECT_EQ(0, q->size());

  for(int i = 0; i< 105; i = i + 2) {
    q->enqueue(i);
    if(i%7==0) {
      EXPECT_EQ(i/2+1,q->size());
    }
  }
  q->dequeue();
  EXPECT_EQ(52, q->size());
  delete q;
}



TEST(ListQueueTest, Init) {
  ListQueue* q = new ListQueue();
  EXPECT_EQ(true,q->isEmpty());
  EXPECT_EQ(0,q->size());
  delete q;
}

TEST(ListQueueTest, EnqueueTest) {
  ListQueue* q = new ListQueue();
  q->enqueue(5);
  q->enqueue(3);
  q->enqueue(2);
  q->enqueue(77);
  q->enqueue(2);
  EXPECT_EQ(5,q->dequeue());
  q->enqueue(7);
  EXPECT_EQ(3,q->dequeue());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(77,q->dequeue());
  EXPECT_EQ(2,q->size());
  EXPECT_EQ(2,q->dequeue());
  EXPECT_EQ(1,q->size());
  delete q; 
}

TEST(ListQueueTest, DequeueTest) {
  ListQueue* q = new ListQueue();
  //EXPECT_EQ(0,q->dequeue()); //this should fail.
  q->enqueue(3);
  EXPECT_EQ(3,q->dequeue());
  delete q;
}

TEST(ListQueueTest, isEmptyTest) {
  ListQueue* q = new ListQueue();
  EXPECT_EQ(true,q->isEmpty());
  q->enqueue(5);
  EXPECT_EQ(false, q->isEmpty());
  q->dequeue();
  EXPECT_EQ(true, q->isEmpty());
  delete q;
}

TEST(ListQueueTest, SizeTest) {
  ListQueue* q = new ListQueue();
  EXPECT_EQ(0,q->size());
  
  q->enqueue(5);
  q->enqueue(2);
  EXPECT_EQ(2,q->size());
  q->dequeue();  
  q->dequeue();
  EXPECT_EQ(0, q->size());

  for(int i = 0; i< 105; i = i + 2) {
    q->enqueue(i);
    if(i%7==0) {
      EXPECT_EQ(i/2+1,q->size());
    }
  }
  q->dequeue();
  EXPECT_EQ(52, q->size());
  delete q;
}


TEST(AQueueTest, Timing) {
  int start, end, elapsed;
  double seconds;
  start = clock();
  
  //enqueue 10000000 values
  
  AQueue* q = new AQueue();
  for(int i = 0; i < 10000000; i++) {
    q->enqueue(i);
  }  
  
  //dequeue 100000 values
  while(!q->isEmpty()) {
    q->dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "ELAPSED TIME : " << seconds << " seconds" << std::endl;
}



TEST(LQueueTest, Timing) {
  int start, end, elapsed;
  double seconds;
  start = clock();
  
  //enqueue 10000000 values
  
  LQueue* q = new LQueue();
  for(int i = 0; i < 10000000; i++) {
    q->enqueue(i);
  }  
  
  //dequeue 100000 values
  while(!q->isEmpty()) {
    q->dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "ELAPSED TIME : " << seconds << " seconds" << std::endl;
}


TEST(ListQueueTest, Timing) {
  int start, end, elapsed;
  double seconds;
  start = clock();
  
  //enqueue 10000000 values
  
  ListQueue* q = new ListQueue();
  for(int i = 0; i < 10000000; i++) {
    q->enqueue(i);
  }  
  
  //dequeue 100000 values
  while(!q->isEmpty()) {
    q->dequeue();
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "ELAPSED TIME : " << seconds << " seconds" << std::endl;
}


