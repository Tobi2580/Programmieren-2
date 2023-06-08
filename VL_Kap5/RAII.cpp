class A{
    int a_{};
public:
    A(int i) : a_{i}{} // RAII
    A() = default;
};
int main(){
    double dArr[] = {3.4, 5.78};
    int i = 5;
    A a(i); // RAII
    A * pA = new A; // RAII
    delete pA; // RAII
    return 0;
}