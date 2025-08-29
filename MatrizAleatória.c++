
#include <iostream>
using namespace std;
int main()
{
   srand(time(NULL));
   int matriz[3][3];
   for(int lin = 0;lin <3;lin++) {
       for(int col = 0;col <3;col++) {
           matriz[lin][col] = rand() %20 + 1;
           
       }
   }

    for(int lin = 0;lin <3;lin++) {
       for(int col = 0;col <3;col++) {
       cout<<matriz[lin][col]<<"\t";
       
       }
         cout<<endl<<endl;
    }
    
    
    
    
    
    return 0;
}
