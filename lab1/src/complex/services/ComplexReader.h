//
// Created by Aleksandr on 2019-03-27.
//

#ifndef LAB3_COMPLEX_READER_H
#define LAB3_COMPLEX_READER_H

#include <fstream>

#define FILE_OPENING_ERROR_EXCEPTION 404

/**
 * Класс, ответственный за парсинг чисел из файла.
 * */
class ComplexReader {
private:
    std::string filename;
    std::ifstream in;
    int length;
    Complex *array;


    int getIntFromString(const std::string s);

    Complex *getComplexFromString(const std::string s);

public:
    /**
     *
     * @param filename – путь к файлу.
     */
    ComplexReader(std::string filename);

    ~ComplexReader();

    /**
     * Возвращает массив спарсенных комплексных чисел.
     * @return
     */
    Complex *getArray();

    /**
     * Возврашает количество комплексных чисел.
     * @return
     */
    int getLength();
};


#endif //LAB3_COMPLEX_READER_H
