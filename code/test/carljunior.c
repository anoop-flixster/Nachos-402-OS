/*
Test 1:: when the fork and execution function are correct i.e correct parameters have been passed in the system calls and incorrect exec.
*/

#include "syscall.h"




int
main()
{
	

int i;



Exec("../test/manager",15);
Exec("../test/ordtaker", 16); 
Exec("../test/cust", 12); 
Exec("../test/cook", 12);
Exec("../test/waiter", 14);   




	
}
