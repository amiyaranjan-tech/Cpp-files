#include <iostream>

using namespace std;

class car
{
    private:
    int weight;
    
    public:
    void SetWeight(int w)
    {
        weight = w;
        
    }
    
    int GetWeight()
    {
        return weight;
    }
};

class BMW
{
    private :
    int topSpeed;
    car *ptr;
    
    public:
    BMW (int w = 0 , int tspeed = 0)  
    {
        ptr = new car;
        ptr -> SetWeight(w);          // variable name (in this case w) can be same or different in both classes 
        topSpeed = tspeed;
    }
    
    int getWeight()
    {
        return ptr->GetWeight();
    }
    int getTSpeed()
    {
        return topSpeed;
    }
    
    ~BMW()   // destructer to delete pointer after use 
    {
        delete ptr;
    }
};

int main()
{
    BMW b(3000 , 350);
    cout<<"weight of car = "<<b.getWeight()<<endl;
    cout<<"topspeed of car = "<<b.getTSpeed()<<endl;
    return 0;
}

