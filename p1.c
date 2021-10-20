#include <stdio.h>
#include "awk_sem.h"
#include  <sys/types.h>
#include  <sys/ipc.h>
#include  <sys/sem.h>

main() {
    int i = 0 ;
   
    int semid_1 ,semid_2,semid_3;
    // *** Please insert proper semaphore initialization here
    semid_1 = create_sem(".",'S1',1);
    semid_2 = create_sem(".",'S2',0);
    semid_3 = create_sem(".",'S3',0);
    
    do {
        // *** this is where you should place semaphore 
    
       P(semid_1);
       
     
       printf("P1111111111 is here\n"); i++;

       V(semid_2);

       P(semid_1);

       V(semid_3);
       
      
       // *** this is where you should place semaphore
   
    }  while (i < 100) ;
}
