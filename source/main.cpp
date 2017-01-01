#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

int main()
{
    CObserver * observer = new CConcreteObserver();
    CSubject  *  subject = new CConcreteSubject();

    subject->Attach(observer);
    subject->Notify();

    subject->Detach(observer);
    subject->Notify();

    delete observer;
    delete subject;
}
