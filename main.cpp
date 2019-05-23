#include <iostream>

#include "tester/tester.hpp"
#include "operations/operation.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
      //Tester::execute();
      std::string equation("-2^2");
      Operation *root = Operation::buildFromEquation(equation);
      std::cout << root->name() << '\n';
      auto answer = root->operate();
      std::cout << answer << '\n';
      return EXIT_SUCCESS;
}