#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // sleep
#include<sys/types.h>

void* my_thread(void *ptr)
{    
     printf("\n Entered in pthread");
     printf("\n pthread ID    :: %lu\n",pthread_self());
     sleep(2);
     printf("\n Thread stop");
     pthread_exit(NULL);
}

int main(void)
{
    pthread_t tid;
    int ret;

    ret = pthread_create(&tid,NULL,&my_thread,NULL);
    if (ret == 0) 
	{
    printf("Thread created successfully\n");
	}
    else
	{
    printf("Unable to create a thread\n");
	}
    
    pthread_join(tid,NULL);  

    printf("\n\n Main function...");
    printf("\n PID:: %d\n", getpid());
    
    return 0;
}



/*EOC*/
