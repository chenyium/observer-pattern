#include "ConcreteObserver.h"

void CConcreteObserver::Update(CSubject * subject)
{
    std::cout << subject->GetAction() << " : ";
    std::cout << "observer update" << std::endl;
}

