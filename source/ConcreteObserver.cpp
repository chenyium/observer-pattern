#include "ConcreteObserver.h"

CConcreteObserver::CConcreteObserver()
{ }

CConcreteObserver::~CConcreteObserver()
{ }

void CConcreteObserver::Update(CSubject * subject)
{
    std::cout << "concrete observer update" << std::endl;
}

