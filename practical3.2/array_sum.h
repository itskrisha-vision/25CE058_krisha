#ifndef ARRAY_SUM_H
#define ARRAY_SUM_H


class array_sum
{
    private:
        int size_array;
        int arr[10];

    public:
        void input_data(int n,int a[]);
        void iterative_array(int n,int a[]);
        int recursive_array(int n,int a[]);
};

#endif // ARRAY_SUM_H
