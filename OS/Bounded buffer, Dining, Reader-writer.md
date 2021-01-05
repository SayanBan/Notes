***BOUNDED BUFFER PROBLEM***

*PROBLEM STATEMENT*

There is a buffer of n slots and each slot is capable of storing one unit of data. There are two processes running, namely, producer and consumer, 
which are operating on the buffer.

A **producer** tries to insert data into an empty slot of the buffer. A **consumer** tries to remove data from a filled slot in the buffer.

One solution of this problem is to use semaphores. The semaphores which will be used here are:

   * m, a binary semaphore which is used to acquire and release the lock.
   * empty, a counting semaphore whose initial value is the number of slots in the buffer, since, initially all slots are empty.
   * full, a counting semaphore whose initial value is 0.

**The Producer Operation**

* a producer first waits until there is atleast one empty slot
* Then it decrements the empty semaphore because, there will now be one less empty slot, since the producer is going to insert data in one of those slots. 
* Then, it acquires lock on the buffer, so that the consumer cannot access the buffer until producer completes its operation.
  After performing the insert operation, the lock is released and the value of full is incremented because the producer has just filled a slot in the buffer.
