void modify(int &x) {
    x = x + 10;  
}

int main() {
    int a = 5;
    modify(a);
    cout << a; 
    return 0;
}
