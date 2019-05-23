//
// Created by Aleksandr on 2019-05-01.
//

#ifndef LAB3_TILES_H
#define LAB3_TILES_H


class Tiles {
public:
    Tiles(){}

    Tiles(const std::string &brand, int size_h, int size_w, int price);

    Tiles(int size_h, int size_w);

    Tiles(const std::string &brand, int price);

    virtual ~Tiles();

    std::string brand;
    int size_h, size_w, price;
    std::string getData();
};


#endif //LAB3_TILES_H
