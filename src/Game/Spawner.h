//
// Created by Harry Skerritt on 07/07/2026.
//

#ifndef SPAWNER_H
#define SPAWNER_H



class Spawner {
public:
    Spawner(int element_count);
    ~Spawner();

    int spawnRandomElement() const;

    int getMaxAtomicNumber() { return max_atomic_number; }
    void setMaxAtomicNumber(int max);
private:
    int max_elements;

    int max_atomic_number = 1;
    int buffer_num = 3;

};



#endif //SPAWNER_H
