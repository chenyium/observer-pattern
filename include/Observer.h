#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "Subject.h"

class CSubject;

class CObserver 
{
public:
    virtual ~CObserver() { }

public:
    virtual void Update(CSubject *) = 0; // interface update
};

#endif
