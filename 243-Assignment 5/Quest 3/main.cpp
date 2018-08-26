#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    //Question a.
    const size_t arraySize{10};
    array<unsigned int, arraySize> values;

    cout << "\nEnter values 10 times for the array:" << endl;
    for (int i{0}; i < values.size(); ++i)
    {
        cin >> values[i];
    }


    //Question b.
    cout << endl;
    for (int x{0}; x < values.size(); ++x)
    {
        cout << values[x] << " ";
    }
    cout << endl;


    //Question c.
    unsigned int *vPtr{nullptr};


    //Question d.
    vPtr = &values[0];


    //Question e.
    cout << endl;
    for (int i{0}; i < arraySize; ++i)
    {
        cout << "The value is " << vPtr[i] << " and the address is " << &vPtr[i] << endl;
    }


    //Question f.
    cout << "\nThe address of arraySize is " << &arraySize << endl << endl;


    //Question g.
    unsigned int *dPtr{nullptr};


    //Question h.
    dPtr = new unsigned int[arraySize];


    //Question i.
    /*Repoints the pointer vPtr to the first addresss of the array values*/
    vPtr =&values[0];
    for (int i{0}; i < arraySize; ++i)
    {
        dPtr[i] = vPtr[i];
    }


    //Question j.
    for (int i{0}; i < arraySize; ++i)
    {
        cout << "The value is " << dPtr[i] << " and the address is " << &dPtr[i] << endl;
    }


    //Question k.
    delete[] (dPtr);
    return 0;
}
