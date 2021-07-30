#include <string>
#include <iostream>
#include "LteModuleManagement.hpp"
/**
 * The Product interface declares the operations that all concrete products must
 * implement.
 */
void ClientCode(const LteModuleManagement& ltemodulem )
{
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << ltemodulem.SomeOperation() << std::endl;
}

int main() {
  std::cout << "App: Launched with the ConcreteCreator1.\n";
    LteModuleManagement* creator = new LteModuleAManagement();
    ClientCode(*creator);
    LteModuleManagement* creator2 = new LteModuleBManagement();
    ClientCode(*creator2);
    delete creator;
    delete creator2;
    return 0;
}