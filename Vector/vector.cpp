#include <iostream>
#include <vector>

namespace S21{
// using MyType = double;
template <typename MyType>
class Vector {
private:
    MyType *m_data;
    int m_length;
    int m_capacity;

public:
    Vector() : m_data{nullptr}, m_length{0}, m_capacity(0) {}

    Vector(int length, MyType value) : m_data(new MyType[length]), m_length(length), m_capacity(length) {
        for(int i = 0; i < m_length; i++)
            m_data[i] = value;
    }

    Vector(const Vector& other) : Vector() {
        m_data = new MyType[other.m_length];
        for(int i = 0; i < other.m_length; i++)
            m_data[i] = other.m_data[i];

        m_length = other.m_length;
        m_capacity = other.m_length;
    }

    // Vector(Vector&& other) = delete;

    Vector(Vector&& other) : m_data(other.m_data), m_length(other.m_length), m_capacity(other.m_capacity) {

        other.m_data = nullptr;
        other.m_capacity = 0;
        other.m_length = 0;

    }

    Vector& operator=(const Vector& other) {
        if(this == &other)
            return *this;

        Vector::~Vector();
        m_data = new MyType[other.m_length];
        for(int i = 0; i < other.m_length; i++)
            m_data[i] = other.m_data[i];

        m_length = other.m_length;
        m_capacity = other.m_length;

        return *this;
    }


    //  Vector& operator=(Vector&& other) = delete;
     Vector& operator=(Vector&& other) {
        if(this == &other)
            return *this;

        Vector::~Vector();

        m_data = other.m_data;
        m_length = other.m_length;
        m_capacity = other.m_capacity;

        other.m_data = nullptr;
        other.m_capacity = 0;
        other.m_length = 0;

        return *this;
     }


    ~Vector() {
        delete[] m_data;
        m_length = 0;
        m_data = nullptr;
        m_capacity = 0;
    }

    friend std::ostream &operator<<(std::ostream &out, const Vector &v) {
        out << "vector: " << v.m_length << ", cap = " << v.m_capacity << '\n';
        for (int i = 0; i < v.m_length; i++)
            out << v.m_data[i] << ' ';
        out << '\n';
        return out;
    }

    void push_back(MyType value) {
        int new_length = m_length + 1; 

        if(new_length > m_capacity) {
            const int new_cap = m_capacity * 2;
            MyType* new_data = new MyType[new_cap];
            for(int i = 0; i < m_length; i++) 
                new_data[i] = m_data[i];
            Vector::~Vector();
            m_data = new_data;
            m_capacity = new_cap;
        }
        m_data[new_length - 1] = value;
        m_length = new_length;
        
    }
};
}

int main() {
    S21::Vector<int> v;
    S21::Vector<char> v3(7, 'a');
    std::cout << v3;
    

    S21::Vector<double> v1(5, 7.4);
    // const S21::Vector<double> v4(5, 7.4);
     S21::Vector<double> v4(5, 7.4);



    v1.push_back(6.4);
    std::cout << v1;
    std::cout << v1;
    v1.push_back(6.4);
    v1.push_back(9.4);
    std::cout << v1;
    v1.push_back(9.4);
    std::cout << v1;
    v1.push_back(6.4);
    v1.push_back(6.4);
    std::cout << v1;
    v1.push_back(4.4);

    std::cout << v1;
    

    std::cout << "v4: " << v4;
    S21::Vector<S21::Vector<double>> vv(8, v4);
    std::cout << vv;

    std::cout << "v4 - before:\n" <<v4;
    S21::Vector<double>& a = const_cast<S21::Vector<double>&>(v4);

    // S21::Vector<double> v4_copy = static_cast<S21::Vector<double>&&>(const_cast<S21::Vector<double>&>(v4));
    S21::Vector<double> v4_copy = std::move(v4);
    std::cout << "v4 - after:\n" << v4;
    std::cout << v4_copy;

    return 0;
}