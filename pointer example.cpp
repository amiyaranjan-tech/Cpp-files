#include <iostream>
#include <string>
using namespace std;

class car 
{
  private :
  
  int weight;
  
  public:
  void setweight(int w)
      {
          weight = w;
      }
      
      int getweight()
      {
          return weight;
      }
  
};

class merc
{
    private:
    int topspeed;
    car *ptr;
    
    public:
    merc(int wght = 0 , int tspeed = 0)
    {
        ptr = new car;
        
        ptr-> setweight(wght);
        topspeed-> tspeed;
        
    }
    
    int getweight()
    {
        return ptr->getweight();
    }
    
    int gettspeed()
        {
          return topspeed ;
        }
        
        ~merc()
        {
            delete ptr;
        }

};

int main ()
{
    merc b(3000, 350);
    
    cout<<"weight of car = "<<b.getweight()<<endl;
    cout<<"Topspeed of car = "<<b.topspeed()<<endl;
    return 0;
}

