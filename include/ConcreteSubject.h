#ifndef __CONCRETE_SUBJECT_H__
#define __CONCRETE_SUBJECT_H__

#include "Subject.h"

class CConcreteSubject : public CSubject
{
public:
    CConcreteSubject();
    virtual ~CConcreteSubject();

public:
    virtual void Attach(CObserver *);
    virtual void Detach(CObserver *);
    virtual void Notify();
};

#endif
