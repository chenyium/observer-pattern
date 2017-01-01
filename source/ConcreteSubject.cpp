#include "ConcreteSubject.h"
#include <algorithm>

CConcreteSubject::CConcreteSubject()
{ }

CConcreteSubject::~CConcreteSubject()
{ }

void CConcreteSubject::Attach(CObserver * observer)
{
    m_list.push_back(observer);
    std::cout << "attach an observer" << std::endl;
}

void CConcreteSubject::Detach(CObserver * observer)
{
    std::list<CObserver *>::iterator iter;
    iter = find(m_list.begin(), m_list.end(), observer);

    if (iter != m_list.end()) {
        m_list.erase(iter);
    }

    std::cout << "detach an observer" << std::endl;
}

void CConcreteSubject::Notify() 
{
    std::list<CObserver *>::iterator iter = m_list.begin();

    for (; iter != m_list.end(); iter++) {
        (*iter)->Update(this); // update observer
    }
}
