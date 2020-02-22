#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
#include <string>

using namespace std;

class DataStore {
  private:
    int status;
  public:
    DataStore(int status){
      this->status = status;
    }

    int getStatus(){
      return status;
    }
    void changeStatus(int b){
      this->status = b;
    }
    void switchStatus(){
      this->status++;
    }
};

void* print_message(void *threadid){
  long tid = (long)threadid;
  string message = "Thread : ";
  message += to_string(tid);
  // What happens if i write ?
  // cout << "Thread : " << tid << endl;
  cout << message << endl;
  //pthread_exit(NULL);
}

void* doRealTime(void* switchA){
  std::cout << switchA << std::endl;
  DataStore* storeA = (DataStore*)switchA;
  int statusA;
  string m;
  while (true){
    statusA = storeA->getStatus();
    m = "Thread A : ";
    m += to_string(statusA);
    std::cout << m << std::endl;
    sleep(1);
  }
}

void* waitUserInput(void* switchB){
  DataStore* storeB = (DataStore*)switchB;
  int currentStatus;
  while(true){
    currentStatus = storeB->getStatus();
    std::getchar();
    storeB->changeStatus(currentStatus + 1);
  }
}

int main(int argc, char *argv[])
{
  pthread_t realTimeThread;
  pthread_t userInputThread;
/*
  int errorFlag = 0;
  long status = 0;
*/
  DataStore data1(5);
  void* switchVar = &data1;

  pthread_create(&realTimeThread, NULL, doRealTime, switchVar);
  pthread_create(&userInputThread, NULL, waitUserInput, switchVar);

  //pthread_join(t1, &result);
  pthread_exit(NULL);

  return 0;
}
