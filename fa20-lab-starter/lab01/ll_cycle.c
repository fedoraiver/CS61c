#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node* tortoise=head;
    node* hare=head;
    while(tortoise!=NULL){
        tortoise=tortoise->next;
	if(hare!=NULL){
	    hare=hare->next; 
	    if(hare!=NULL){
	        hare=hare->next;
	    }else{
	        return 0;
	    }
	}else{
	    return 0;
	}
	if(hare==tortoise){
	    return 1;
	}
    }
    return 0;
}
