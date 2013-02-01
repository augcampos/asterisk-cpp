#include <iostream>
#include <stdio.h>
#include <typeinfo>


class Action
{
public:
    Action(){}
    virtual ~Action() {}

    virtual const std::string& getClassName()
    {
        if (fn.empty()){
            char str [20];
            int i;
            sscanf( (typeid(*this).name()) ,"%d%s" ,&i ,str);
            fn.assign(str,i-6);
        } 
        return  (fn);
        //return (__PRETTY_FUNCTION__);
    }
private:
    std::string fn;
    /* data */
};

class TesteAction : public Action
{
};


class NovoTesteAction : public TesteAction
{
};

int main()
{
    for (int i = 0; i < 1; ++i)
    {
        Action a;
        TesteAction ta;
        NovoTesteAction nta;
        Action& ra = a;
        TesteAction& rta = ta;
        Action* pa = &a;
        TesteAction* pta = &ta;


        std::cout << "Class  A[" <<   a.getClassName() << "]" << std::endl;
        std::cout << "Class  RA[" <<  ra.getClassName() << "]" << std::endl;
        std::cout << "Class  PA[" <<  pa->getClassName() << "]" << std::endl;
        std::cout << "Class  TA[" <<  ta.getClassName() << "]" << std::endl;
        std::cout << "Class RTA[" <<  rta.getClassName() << "]" << std::endl;
        std::cout << "Class PTA[" <<  pta->getClassName() << "]" << std::endl;
        std::cout << "Cast TA->A[" << ((Action)ta).getClassName() << "]" << std::endl;
        std::cout << "Class NTA[" << nta.getClassName() << "]" << std::endl;
    }
    return 0;
}
