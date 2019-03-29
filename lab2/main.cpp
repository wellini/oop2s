#include <iostream>
#include "Calculator.cpp"
#include "OperationDecisionManager.cpp"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc >= 3) {
        float (*operation)(float, float) = OperationDecisionManager::getOperationByType(argv[1]);
        Calculator calculator(operation);

        string a(argv[2]), b(argv[3]);
        cout << calculator.perform(a, b);
    }

    return 0;

}

