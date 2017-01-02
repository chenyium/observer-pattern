#include "ConcreteSubject.h"
#include <algorithm>

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


//! event delegate implement  cpp11
void CConcreteSubjectBind::Attach(std::string name, VOIDFUNC vf)
{
    m_map.insert(std::pair<std::string, VOIDFUNC>(name, vf));
    std::cout << "attach an observer" << std::endl;
}

void CConcreteSubjectBind::Detach(std::string name)
{
    auto iter = m_map.find(name);

    if (iter != m_map.end()) {
        m_map.erase(iter);
    }

    std::cout << "detach an observer" << std::endl;
}

void CConcreteSubjectBind::Notify() 
{
    auto func = [](const std::pair<std::string, VOIDFUNC> &pair){ pair.second(); };
    std::for_each(m_map.begin(), m_map.end(), func);
}
