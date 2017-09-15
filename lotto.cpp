#include <iostream>
#include "lotto.h"

using namespace std;
/* So I guess I should use arrays? Seems like quite good idea, hopefully it'll work as intended.
 * Also I'm still not sure how to avoid duplicates...
*/

void lotto::lotek(){
   int lotteryPool[50];
   for(int x = 0; x < 50; x++) {
       lotteryPool[x] = x + 1;
   }
   srand (time(NULL));
   int random;
   int y = 0;
   while(y < 6) {
       random = rand()%50;
       if(lotteryPool[random] != 0) {
           cout << lotteryPool[random] << " ";
           lotteryPool[random] = 0;
           y++;
       }
   }

}

void lotto::multilotek() {
    for(int i = 0; i < 20; i++) {
        int a = rand()%80+1;
        cout << a << endl;
    }
}

void lotto::simpleMenu() {
    cout << "Bardzo prosty program używający generator liczb pseudolosowych.\n" << endl;
    cout << "1. Lotto (bez plusa i innych super szans)\n2. Multi multi (bez plusa i super szansy)\n3. Koniec (kończy program)" << endl;
}
