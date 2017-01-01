#ifndef __CONCRETE_OBSERVER_H__
#define __CONCRETE_OBSERVER_H__

#include "Observer.h"

class CConcreteObserver : public CObserver
{
public:
    CConcreteObserver();
    virtual ~CConcreteObserver();

public:
    virtual void Update(CSubject *);
};

#endif
