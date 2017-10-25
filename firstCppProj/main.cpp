#include <iostream>

using namespace std;

class IggisClass{
    public:
        IggisClass(string z){
            setName(z);
        };
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
    IggisClass iggio("Lucky Iggi\n");
    cout << iggio.getName();

    IggisClass iggiClone("You are me");
    cout << iggiClone.getName();
    return 0;
}


