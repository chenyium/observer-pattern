#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main()
{
    CObserver * observer = new CConcreteObserver();
    CSubject  *  subject = new CConcreteSubject("boss coming");

    subject->Attach(observer);
    subject->Notify();

    subject->Detach(observer);
    subject->Notify();

    delete observer;
    delete subject;

    std::cout << "--- observer pattern with std::bind ---" << std::endl;

    CSubjectBind * subjectbind = new CConcreteSubjectBind();
    CObserverBindA observerA;
    CObserverBindB observerB;

    subjectbind->Attach("observerA", std::bind(&CObserverBindA::Update, &observerA));
    subjectbind->Attach("observerB", std::bind(&CObserverBindB::Update, &observerB));
    subjectbind->Notify();

    subjectbind->Detach("observerA");
    subjectbind->Notify();

    delete subjectbind;
    
    return 0;
}
