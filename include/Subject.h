#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "Observer.h"

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <functional>

class CObserver;

class CSubject
{
public:
    virtual ~CSubject() { }

public:
    virtual void Attach(CObserver *) = 0;
    virtual void Detach(CObserver *) = 0;
    virtual void Notify() = 0;

public:
    virtual std::string GetAction() = 0;
};


//! event delegate implement  cpp11
typedef std::function<void()> VOIDFUNC;

class CSubjectBind 
{
public:
    virtual ~CSubjectBind() { }

public:
    virtual void Attach(std::string, VOIDFUNC) = 0;
    virtual void Detach(std::string) = 0;
    virtual void Notify() = 0;
};

#endif
