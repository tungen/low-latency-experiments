<td><img src="https://img.shields.io/badge/LICENCE-PUBLIC%20DOMAIN-green.svg" alt="Licence badge"></td>

Low latency experiments , mostly blogged on www.nativecoding.wordpress.com

**C++**

Virtual Methods vs CRTP : https://nativecoding.wordpress.com/2015/06/05/virtual-methods-vs-crtp-benchmark-2/

**Concurrency**

False sharing : Aligned data vs non aligned data : https://nativecoding.wordpress.com/2015/06/19/multithreading-multicore-programming-and-false-sharing-benchmark/

Fine grained vs coarse grained MPMC unbounded queue : https://nativecoding.wordpress.com/2015/08/30/multithreading-lock-contention-and-fine-grained-vs-coarse-grained-benchmark/

**Concurrency lockfree**

Atomics vs Mutexes : https://nativecoding.wordpress.com/2015/02/15/transition-to-c11-the-most-important-features/

Lockless ringbuffer queue vs lock based ringbuffer queue : https://nativecoding.wordpress.com/2015/06/17/multithreading-lockless-thread-safe-spsc-ring-buffer-queue/

Sequential-Consistency SPSC vs Acquire/Release SPSC : https://nativecoding.wordpress.com/2015/12/20/multithreading-memory-orderings-fine-grained-spsc-lockless-queue-benchmark/

**Network/IO**

Epoll vs multithreaded IO : It has 3 projects to benchmark a single threaded epolling TCP server against a thread-per-client TCP server.
							All sockets use TCP_NO_DELAY to disable Nagle algorithm. 
			
								1. Client automation : You can specify number of clients and number of messages.
								   A thread will be spawned for each thread and each thread will send the specified 
								   amount of messages to the connected server. And each thread will expect a response
								   per message for automation to end.
								   
								2. Server threaded per client : Each connection request spawns a new thread.
								
								3. Server reactor : Linux implementation uses edge triggered epoll , whereas Windows one 
								   uses select. Note that Windows select has a limitation of 64 file descriptors.