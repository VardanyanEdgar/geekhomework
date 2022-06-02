#include <iostream>

void remove_by_index(int* a, int size, int index_to_remove)
{
    for (int i = index_to_remove; i < size - 1; ++i)
        a[i] = a[i + 1];
    a[size - 1] = 0;
}

void print_array(int* a, int size)
{
    std::cout << "Array:" << std::endl;
    for (int i = 0; i < size; ++i)
        std::cout << a[i] << " ";
}

int main()
{
    int size, * a;
    std::cin >> size;
    a = new int[size];
    for (int i = 0; i < size; ++i)
        std::cin >> a[i];
    print_array(a, size);

    int index_to_remove;
    std::cout << "Index of element to remove: ";
    std::cin >> index_to_remove;
    remove_by_index(a, size, index_to_remove);
    print_array(a, size);

    delete[] a;
    std::cin.ignore();
    std::cin.get();
    return 0;
}