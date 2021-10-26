#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<stdlib.h>
#include<unistd.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int counter = 2;

void* thread1(){
    sleep(1);
    pthread_mutex_lock(&lock);
    counter ++;
    printf("\nDay la thread1: gia tri counter = %d", counter);
    pthread_mutex_unlock(&clock);
    while(1);
}

void* thread2(){
    sleep(3);
    pthread_mutex_lock(&lock);
    counter ++;
    printf("\nDay la thread2: gia tri counter = %d", counter);
    pthread_mutex_unlock(&clock);
    while(1);
}

int main() {
    pthread_t th1,th2;

    pthread_create(&th1,NULL,thread1,NULL);
    pthread_create(&th2,NULL,thread2,NULL);

    pthread_join(th1,NULL);
    pthread_join(th2,NULL);

    return 0;
}