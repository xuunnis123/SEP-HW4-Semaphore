#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
    int semid_S2,semid_S1,semid_S3 ;
    semid_S2 = get_sem(".",'S2');
    semid_S1 = get_sem(".",'S1');
    semid_S3 = get_sem(".",'S3');

   
    do {
        // *** this is where you should place semaphore 
       P(semid_S3);
       
       printf("P3333333 is here\n"); i++ ;
       
       V(semid_S1);
       
       // *** this is where you should place semaphore
   
    }  while (i< 200);
}
