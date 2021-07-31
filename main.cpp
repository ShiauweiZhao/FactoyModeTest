#include <string>
#include <iostream>
#include "LteModuleManagement.hpp"
/**
 * The Product interface declares the operations that all concrete products must
 * implement.
 */
void ClientCode(const shared_ptr<LteModuleManagement> ltemodulem )
{
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << ltemodulem->SomeOperation() << std::endl;
}

int main() {
  std::cout << "App: Launched with the ConcreteCreator1.\n";
    std::shared_ptr<LteModuleManagement> _LteModuleA(new LteModuleAManagement());

    ClientCode(_LteModuleA);
  std::shared_ptr<LteModuleManagement> _LteModuleB(new LteModuleBManagement());

    ClientCode(_LteModuleB);
   
    return 0;
}