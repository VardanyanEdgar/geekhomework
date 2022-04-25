#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define size 3

int main()
{
    cout << "\nTASK #3\n";
    cout << "please enter any " << size << "number for tour array: \n";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        "\n";
    }
    cout << "here is your entered array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";     
    }

    for (int i = 0; i< size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = false;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (flag)
        {
            cout << "\nsorted array is: \n";
            for (size_t k = 0; k < size; k++)
            {
                cout << arr[k] << endl;
            }
        }    
    }

    /*Объявить структуру Сотрудник с различными полями.Сделайте для нее побайтовое
    выравнивание с помощью директивы pragma pack.Выделите динамически переменную 
    этого типа.Инициализируйте ее.Выведите ее на экран и ее размер с помощью 
    sizeof.Сохраните эту структуру в текстовый файл.*/
    
    cout << "\nTASK #4\n";
    struct employee {
        char name;
        long id;
        double call_sign_number;
        int sallary;
        float work_experience_ages;
    };
#pragma pack(push, 1)
    struct employeenew {
        char name;
        long id;
        double call_sign_number;
        int sallary;
        float work_experience_ages;
    };
#pragma pack(pop)

    int *SIZESTR1 = new int(sizeof(employee));
    int* SIZESTR2 = new int(sizeof(employeenew));
    cout << *SIZESTR1 << " " << *SIZESTR2 << std::endl;
    delete SIZESTR1;
    delete SIZESTR2;

    ofstream file("file.txt");
    if (!file)
    {
        cout << "file is not opened";
    }
    else
    {
        file << "#pragma pack(push, 1) struct employeenew\n {char name;\n long id;\n double call_sign_number;\n int sallary;\n float work_experience_ages;}\n #pragma pack(pop);";
    }
   return 0;
}