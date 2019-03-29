//
// Created by Aleksandr on 2019-03-29.
//

#ifndef LAB2_CALCULATOR_H
#define LAB2_CALCULATOR_H


/**
 * Has responsibility for performing operations passed into constructor.
 */
class Calculator {
private:
    float (*operation)(float, float);

public:
    Calculator(float (*operation)(float, float)) : operation(operation){};
    /**
     * Get result by performing operation
     * @param a
     * @param b
     * @return
     */
    float perform(std::string a, std::string b);
};


#endif //LAB2_CALCULATOR_H
