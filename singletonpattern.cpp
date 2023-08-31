// singleton design pattern in c++
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;
class singleton()
{
    private:
        static singleton* instance;
        singleton();
        ~singleton();
        singleton(singleton const&);
        void operator=(singleton const&);
        
    public:
        static singleton* getInstance();
        static void deleteInstance();
        static void print();
        static int add(int a);
        
}
