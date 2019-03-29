//
// Created by Aleksandr on 2019-03-29.
//

#include "OperationDecisionManager.h"

const char *OperationDecisionManager::ops[] = {"plus", "minus", "multiply", "divide"};

float (*OperationDecisionManager::getOperationByType(char *type))(float, float) {

    float (*operation)(float, float);
    int i = getOperationIndex(type);

    switch (i) {
        case 0:
            operation = &OperationDecisionManager::operationPlus;
            break;
        case 1:
            operation = &OperationDecisionManager::operationMinus;
            break;
        case 2:
            operation = &OperationDecisionManager::operationMultiply;
            break;
        case 3:
            operation = &OperationDecisionManager::operationDivide;
            break;
        case -1:
            break;
    }
    return operation;
}

float OperationDecisionManager::operationPlus(float a, float b){
    return a + b;
}
float OperationDecisionManager::operationMinus(float a, float b){
    return a - b;
}
float OperationDecisionManager::operationMultiply(float a, float b){
    return a * b;
}
float OperationDecisionManager::operationDivide(float a, float b){
    return a / b;
}

int OperationDecisionManager::getOperationIndex(char *type){
    for (int i = 0; i < 4; ++i) {
        if (!strcmp(ops[i], type)) return i;
    }
    return -1;
};