#include <iostream>
#include <string>
#include <map>


constexpr int func1();

constexpr int func1() {
    constexpr int a = 1000;
    return a;
}

struct Person {
    constexpr Person(const char* p, int age): name(p), age(age) {}
    const char* name;
    int age;
};

template<typename T>
constexpr T display(T t) {
    return t;
}

class T1
{
    public: static std::string get() {
        return "This is from T1";
    }
};

template<class T, typename P>
void func(void)
{
    // auto ret = T::get();
    P ret = T::get();
    std::cout << "class T ret: " << ret << std::endl;
}

int main()
{
    std::string str1 = "version_1\t";
    std::string str2 = R"hello(version_2\t)hello";

    std::cout << str1  << '\n' << std::endl;
    std::cout << str2  << '\n' << std::endl;

    constexpr int num = func1();

    std::cout << "This is num " <<num << '\n' << std::endl;

    using namespace std;

    constexpr struct Person p1 { "luffy", 19 };
    constexpr struct Person p2 = display(p1);
    cout << "luffy's name: " << p2.name << ", age: " << p2.age << endl;

    map<int, string> person;
    person.insert(make_pair(1, "ace"));
    person.insert(make_pair(2, "poi"));
    person.insert(make_pair(3, "kol"));
    // map<int, string>:: iterator it = person.begin();
    auto it = person.begin();
    for (; it != person.end(); ++it)
    {
       std::cout << "key: " << it->first << ", value: " << it->second << '\n';
    }

    func<T1, string>();
    return 0;

}
