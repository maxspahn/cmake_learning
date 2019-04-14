#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
#include <string>

using namespace std;

void* print_message(void *threadid){
  long tid = (long)threadid;
  string message = "Thread : ";
  message += to_string(tid);
  // What happens if i write ?
  // cout << "Thread : " << tid << endl;
  cout << message << endl;
  //pthread_exit(NULL);
}

void* doRealTime(void*){
  while (true){
    std::cout << "A" << std::endl;
    sleep(1);
  }
}

void* waitUserInput(void*){
  std::cout << "B" << std::endl;
}

int main(int argc, char *argv[])
{
  pthread_t realTimeThread;
  pthread_t userInputThread;
  int errorFlag = 0;

  pthread_create(&realTimeThread, NULL, doRealTime, NULL);
  pthread_create(&userInputThread, NULL, waitUserInput, NULL);

  //pthread_join(t1, &result);
  pthread_exit(NULL);

  return 0;
}
