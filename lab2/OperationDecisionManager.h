//
// Created by Aleksandr on 2019-03-29.
//

#ifndef LAB2_OPERATIONDECISIONMANAGER_H
#define LAB2_OPERATIONDECISIONMANAGER_H

/**
 * Has responsibility for decision which function will be used in calculator
 */
class OperationDecisionManager {
private:
    static const char *ops[];
    static int getOperationIndex(char *type);
public:
    static float (*getOperationByType(char *type))(float, float);
    static float operationPlus(float a, float b);
    static float operationMinus(float a, float b);
    static float operationMultiply(float a, float b);
    static float operationDivide(float a, float b);
};


#endif //LAB2_OPERATIONDECISIONMANAGER_H
