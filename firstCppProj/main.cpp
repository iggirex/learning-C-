#include <iostream>

using namespace std;

class IggisClass{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name = "Ignacius";
};

int main()
{
    IggisClass iggio;
    iggio.setName("Sir Ig$ter");
    cout << iggio.getName();
    return 0;
}


