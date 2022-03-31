#include <iostream>

class Person {
public:
    Person(std::string Im, int AgeIm, char PolIm, int MassIm) : name(Im), age(AgeIm), pol(PolIm), massa(MassIm){}
    std::string getname() { return name; }
    int getage() { return age; }
    char getpol() { return pol; }
    int getmassa() { return massa; }
    void setname(std::string a) { name = a; }
    void setage(int b) { age = b; }
    void setmassa(int c) { massa = c; }
    void setpol(char d) { massa = d; }
private:
    std::string name;
    int age;
    char pol;
    int massa;
};

class Student :public Person {
public:

    Student(std::string Im, int AgeIm, char PolIm, int MassIm, int g, int h): Person(Im, AgeIm, PolIm, MassIm) {
        setname(Im), setage(AgeIm), setmassa(PolIm), setpol(MassIm), setizmgod(g, h), setsumStudent();
    }
    ~Student(){}
    int getsumStudent() { return sumStudent; }
    void setuvel() { konec_ob= konec_ob++; }
    void setizmgod(int g, int h) { nach_ob = g; konec_ob = h; }
    void setsumStudent() { sumStudent++; sum = sumStudent; }
    int getnach() { return nach_ob; }
    int getkon() { return konec_ob; }
    void print() { std::cout << ' ' << "name " << getname() <<" " << "age " << getage() << " " << "pol " << getpol()
        << " " <<"massa " <<getmassa() << " " << "sumStudent " << getsumStudent() << " " <<"arrAgeofstudy " << getnach()<<" "<< getkon() << std::endl; }
private:
    int nach_ob;
    int konec_ob;
    static int sumStudent;
    int sum;
};
int Student::sumStudent = 0;

//2.Apple(яблоко) и Banana(банан), которые наследуют класс Fruit(фрукт).GrannySmith которые наследуют класс Apple(яблоко)
class Fruit
{
public:
    void setName(std::string a) { name = a; }
    void setColor(std::string b) { color = b; }
    std::string getName() const { return name; }
    std::string getColor() const { return color; }
protected:
    std::string name;
    std::string color;
};

class Banana : public Fruit
{
public:
    Banana() { setName("banana"); setColor("yellow"); }
    ~Banana() {}
};

class Apple : public Fruit
{
public:
    Apple(std::string b) { setName("apple"); setColor(b); };
    Apple() {}
    ~Apple() {}
private:

};

class  GrannySmith : public Apple
{
public:
    GrannySmith()
    {
    setName(a);
    setColor(b); 
    };
    ~GrannySmith(){}
private:
    std::string a = "Granny Smith";
    std::string b = "green";

};
//3 BlackJeck
class Cart{
public:
    Cart(std::string name):namekart(name){};
    ~Cart() {};
    void setves(int a) { ves = a; }
    int getves() { return ves; }
    void setnamekart(std::string kart) { namekart = kart; }
    std::string getnamekart() { return namekart; }
    int konvertnameves(std::string name) {};
protected:
    int ves;
    std::string namekart;
};

class CartKartinka :public Cart 
{
private:
    const int a = 11;
    const int b = 10;
    std::string ace = "ace";
    std::string king = "king";
    std::string queen = "queen";
    std::string jack = "jack";
public:
    CartKartinka(std::string name) : Cart(name) { setnamekart(name); }
    int konvertnameves(std::string name) {
        int q;
        if (name == ace) {
            q = a; return q;
        }
        else if(name == king or name == queen or name == queen){
            q = b; return q;
        }
        else { return 0; }
        setves(q);
    }

};

class CartInteger :public Cart {
private:
    const int k = 10;
    const int c = 9;
    const int d = 8;
    const int e = 7;
    const int f = 6;
    const int g = 5;
    const int h = 4;
    const int i = 3;
    const int j = 2;
    std::string two = "four";
    std::string three = "three";
    std::string four = "four";
    std::string five = "five";
    std::string six = "six";
    std::string seven = "seven";
    std::string eight = "eight";
    std::string nine = "nine";
    std::string ten = "ten";
public:
    CartInteger(std::string name) : Cart(name) { setnamekart(name); }
    int konvertnameves(std::string name) {
        int q;
        if (name == two) {
            q = j; return q;
        }
        else if (name == three) {
            q = i; return q;
        }
        else if (name == four) {
            q = h; return q;
        }
        else if (name == five) {
            q = g; return q;
        }
        else if (name == six) {
            q = f; return q;
        }
        else if (name == seven) {
            q = e; return q;
        }
        else if (name == eight) {
            q = d; return q;
        }
        else if (name == nine){
            q = c; return q;
        }
        else if (name == ten) {
            q = k; return q;
        }
        else { return 0; }
        setves(q);
    }
};

class Uchastniki{
public:
    Uchastniki(std::string nameUchastniki, int c) {
        setname(nameUchastniki); setstavka(c);
    }
    void setname(std::string a) { name = a; }
    void setstavka(int b) { stavka = b; }
    std::string getname() const { return name; }
    int getstavka()const { return stavka; }
    int sravneniesumm(int a, int b) { 
        int c;
        if (a == b) {
            c = 0; return c;
        }
        else  {
            c = a - b; return c;
        }
    }
    void print(int Sumkart,int b,int c) { std::cout<< "nameUchastnika "<< getname() <<" " << "stavkaUchastnika " << getstavka() << " "
        <<"Win "<< Win(Sumkart, b,c)<<std::endl; }
    std::string Win(int Sumkart, int b, int c) {
        std::string a;
        if (Sumkart == BlackJeck) {
            a = "victory"; return a;
        }
        else if (Sumkart> BlackJeck) {
            a = "lost";
            return a;
        }
        else if (sravneniesumm(b,c)==0) { a = "nichiy"; return a; }
        else if (sravneniesumm(b, c) > 0) { a = "victory"; return a; }
        else { a = "lost"; return a; }
}
protected:
    std::string name;
    int stavka;
    int const BlackJeck = 21;
    int sum;
    int kolichestvokart;

private:  
};
class Crupie :public Uchastniki{
public:
    Crupie(std::string nameUchastniki, int c) : Uchastniki(nameUchastniki, c) { setname(nameUchastniki), setstavka(c);
    }
protected:    
    int stavkaCrupie = 0;
};
class Igrok :public Uchastniki {
public:
    Igrok(std::string nameUchastniki, int c) : Uchastniki(nameUchastniki, c) { setname(nameUchastniki), setstavka(c);
    }
protected:
    int stavkaIgrok=100;
};

int main()
{
    {
        Student Student1("Noda", 24, 'w', 54, 2010, 2014);
        std::cout << Student1.getnach() << " ";
        std::cout << Student1.getkon() << " ";
        Student1.setizmgod(2017, 2019);
        std::cout << Student1.getnach() << " ";
        std::cout << Student1.getkon() << " ";
        Student1.print();
        Student1.setuvel();
        Student1.print();
        Student Student2("Iliy", 20, 'm', 70, 2009, 2013);
        Student2.print();
        Student Student3("Trend", 21, 'm', 83, 2008, 2015);
        Student3.print();
    }
    {
        Apple a("red");
        Banana b;
        GrannySmith c;

        std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
        std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
        std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    }

    Crupie Djek("Djek", 0);
    Igrok Patrik("Patrik",200);
    int stavkaPatrik = Patrik.getstavka();
    Djek.setstavka(1.5 * stavkaPatrik);
    CartInteger kartDjek("ten");
    kartDjek.konvertnameves(kartDjek.getnamekart());
    CartKartinka kartPatrik("ace");
    std::string u = kartPatrik.getnamekart();
    std::cout << u << std::endl;
    std::cout << kartDjek.getves() << std::endl;
    std::cout << kartPatrik.getves() << std::endl;
    return 0;
}
