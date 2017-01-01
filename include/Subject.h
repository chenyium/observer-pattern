#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "Observer.h"

#include <string>
#include <list>
#include <iostream>

class CObserver;

class CSubject
{
protected:
    CSubject() { }

public:
    virtual ~CSubject() { }

public:
    virtual void Attach(CObserver *) = 0;
    virtual void Detach(CObserver *) = 0;
    virtual void Notify() = 0;

protected:
    std::list<CObserver *> m_list;
};

#endif
