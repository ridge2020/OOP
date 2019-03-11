/**
 * @file    ElasticArray.h
 * @brief   header file holding the ElasticArray class 
 *
 * has the class defintion and fucntion prototypes
 *
 * @author  ridge diffine
 * @date    2/4
 */
#ifndef ELASTICARRAY_H
#define ELASTICARRAY_H

class ElasticArray{
public:
   ElasticArray(int size);
   ElasticArray() = default;
   int  size() const { return _size; }
   int capacity() const {return _max_size; }
   int front() const;
   int back() const;
   int pop_back();
   int& at(int i);
   void push_back(int value);
   void shrink_to_fit();
   ~ElasticArray();

private:
   int* _array = nullptr;
   int  _size  = 0;
   int _max_size = 0;
};

const ElasticArray& operator=(const ElasticArray&);

#endif