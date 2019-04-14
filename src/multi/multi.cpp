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

int main(int argc, char *argv[])
{
  int nbThreads = 2;
  if (argc == 2){
    nbThreads = atoi(argv[1]);
  }
  int errorFlag = 0;
  pthread_t threads[nbThreads];
  for (int i = 0; i < nbThreads; ++i) {
    errorFlag = pthread_create(&threads[i], NULL, print_message, (void*)i);
    if (errorFlag) {
      cout << "Error: unable to create thread, " << errorFlag << endl;
      exit(-1);
    }
  }

  //pthread_join(t1, &result);
  pthread_exit(NULL);

  return 0;
}
