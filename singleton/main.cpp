#include "singleton.h"

int main () {
    Singleton::GetInstance().GetName();
    Singleton::GetInstance().SetName("New Name");
    Singleton::GetInstance().GetName();
    Singleton::GetInstance().SetName("Hey Name");
    Singleton::GetInstance().GetName();
    return 0;
}