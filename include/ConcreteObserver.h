#ifndef __CONCRETE_OBSERVER_H__
#define __CONCRETE_OBSERVER_H__

#include "Observer.h"

class CConcreteObserver : public CObserver
{
public:
    virtual ~CConcreteObserver() { }

public:
    virtual void Update(CSubject *);
};


//! other implement
class CObserverBindA
{
public:
    void Update(){
        std::cout << "observer bind A update" << std::endl;
    }
};

class CObserverBindB
{
public:
    void Update(){
        std::cout << "concrete bind B update" << std::endl;
    }
};

#endif
