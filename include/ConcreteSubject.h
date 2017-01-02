#ifndef __CONCRETE_SUBJECT_H__
#define __CONCRETE_SUBJECT_H__

#include "Subject.h"

class CConcreteSubject : public CSubject
{
public:
    CConcreteSubject(std::string action) {
        m_action = action;
    }

public:
    virtual void Attach(CObserver *);
    virtual void Detach(CObserver *);
    virtual void Notify();

public:
    virtual std::string GetAction() { return m_action; }

protected:
    std::list<CObserver *> m_list;

private:
    std::string m_action;
};


//! event delegate implement  cpp11
class CConcreteSubjectBind: public CSubjectBind
{
public:
    virtual void Attach(std::string, VOIDFUNC);
    virtual void Detach(std::string);
    virtual void Notify();

protected:
    std::map<std::string, VOIDFUNC> m_map;
};

#endif
