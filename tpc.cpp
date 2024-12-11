
#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_NUMBER 75 + 1
#define MAX_NUM_OF_CARDS 5

using namespace std;

int tmpCard[25];

struct numero{
    int num;
    bool stf;
};

numero painel[MAX_NUMBER];

int main() {
 

for(int i = 0; i < 25; i++){
    cout << tmpCard[i] << " ";
    if((i + 1) % 5 == 0) cout << endl;
}
  return 0;
for(int i = 0; i < MAX_NUMBER; i++){
  painel[i].num = i + 1;
  painel[i].stf = false;
}

srand(time(0));
for(int i = 0; i < 25; i++){
    tmpCard[i] = rand() % MAX_NUMBER;
    for(int j = 0; j < i; j++){
        if(tmpCard[j] == tmpCard[i]){
            i--;
            break;
        }
    }
}

for(int i = 0; i < 25; i++){
    cout << tmpCard[i] << " ";
    if((i + 1) % 5 == 0) cout << endl;
}

for(int i = 0; i < MAX_NUMBER; i++){
    cout << painel[i].num << " "<<painel[i].stf << " ";
    if((i + 1) % 10 == 0) cout << endl;
}

int num = rand() % MAX_NUMBER;
if (painel[num-1].sts ==false)()
return 0;
}


    