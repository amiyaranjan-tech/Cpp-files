#include <iostream>
#include<string>
using namespace std;

class object{

   private:

       int weight;

   public:

    object( int a = 0 ){

      weight = a;

    }

    void printwe(){

       cout<<  " weight " << weight;

    }

    void operator --(){

        --weight;

}

  void operator --(int){

        weight--;

}

};

int main()

{

    object joh(70);

    --joh;

    joh--;

    joh.printwe();

    return 0;

}
