#include <iostream>
#include <typeinfo>

class Action
{
public:
    Action(const char* actionName) {
    	this->fn.assin(actionName);
    }
    ~Action() {}

    std::string getClassName(const char* fname)
    {
        //return  (typeid(this).name());
        //return (__PRETTY_FUNCTION__);
        
        return ( this->fn );
    }

    std::string fn;
    /* data */
};

class TesteAction : public Action
{
public:
    TesteAction() {}
    ~TesteAction() {}

    std::string getClassName()
    {
    	//return  (typeid(*this).name());
    	return (__PRETTY_FUNCTION__);
    }

    /* data */
};

int main()
{
    Action a;
    TesteAction ta;

    //std::cout << "Class  A[" <<  a.getClassName() << "]" << std::endl;
    std::cout << "Class TA[" << ta.getClassName() << "]" << std::endl;

    return 0;
}
