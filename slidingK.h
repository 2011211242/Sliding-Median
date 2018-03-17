#ifndef SLIDINGMEDIAN
#define SLIDINGMEDIAN
#include <vector>
#include <queue>
//#include <template>
using namespace std;

template <class T> 
class SlidingK{
public:
    SlidingK(int n, int k);
    T push(T a);

private:
    struct node{
        T val;
        int idx;
        node(T a, int i): val(a), idx(i){}
    };

    int left(int);
    int right(int);
    int father(int);

    vector<int> idxArray;
    int state;
    int size;
    vector<node> largerHeap;
    vector<node> minHeap;
};

template <class T>
SlidingK<T>::SlidingK(int n, int k){
    idxArray.resize(n);
    largerHeap.resize(k);
    minHeap.resize(n - k);
    state = 0;
    size = 0;
}

template <class T>
int SlidingK<T>::left(int idx){
    return (idx << 1) + 1;
}

template <class T>
int SlidingK<T>::right(int idx){
    return (idx + 1) << 1;
}

template <class T>
int SlidingK<T>::father(int idx){
    return (idx - 1) >> 1;
}

template <class T>
T SlidingK<T>::push(T a){
    if(size < idxArray.size()){

    }
    else{

    }
    
}




#endif
