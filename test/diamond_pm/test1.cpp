// #include <iostream>

// class LivingThing {
// public:
//     int *num;
//     LivingThing(int *number){
//         num = new int;
//         num = number;
//     };
//     ~LivingThing(void)
//     {
//         delete num;
//     }
//     virtual void breathe() {
//         std::cout << "I'm breathing as a living thing." << std::endl;
//     }
//     void showdata(void)
//     {
//         std::cout << "the number: "<< *num << std::endl;
//     }
// };

// class Animal : public  LivingThing {
// public:
//     void breathe() {
//         std::cout << "I'm breathing as an animal." << std::endl;
//     }
// };

// class Reptile : public  LivingThing {
// public:
//     void breathe() {
//         std::cout << "I'm breathing as a reptile." << std::endl;
//     }

//     void crawl() {
//         std::cout << "I'm crawling as a reptile." << std::endl;
//     }
// };

// // class Snake :  public Animal,  public Reptile {
// //     public:
// //     void breathe()
// //     {
// //         //Reptile::breathe();
// //         std::cout << "I'm breathing as a Sanke" << std::endl;
// //     }
// //     // void crawl()
// //     // {
// //     //     std::cout << "I'm crawling as a Sanke." << std::endl;
// //     // }

// // };

// int main() {
//     int *num = new int;
//     *num = 5;
//     LivingThing *now = new LivingThing(num);
//     now->showdata();
//     LivingThing copy = *now;
//     delete now;
//     copy.showdata();

//     return 0;
// }


// Name::Name(int) [base object constructor]:
//         push    rbp
//         mov     rbp, rsp
//         mov     QWORD PTR [rbp-8], rdi
//         mov     DWORD PTR [rbp-12], esi
//         mov     rax, QWORD PTR [rbp-8]
//         mov     edx, DWORD PTR [rbp-12]
//         mov     DWORD PTR [rax], edx
//         nop
//         pop     rbp
//         ret
// .LC0:
//         .string "a"
// Name::fun():
//         push    rbp
//         mov     rbp, rsp
//         sub     rsp, 16
//         mov     QWORD PTR [rbp-8], rdi
//         mov     edx, 1
//         mov     esi, OFFSET FLAT:.LC0
//         mov     edi, 1
//         call    write
//         nop
//         leave
//         ret
// main:
//         push    rbp
//         mov     rbp, rsp
//         sub     rsp, 16
//         lea     rax, [rbp-4]
//         mov     esi, 5
//         mov     rdi, rax
//         call    Name::Name(int) [complete object constructor]
//         lea     rax, [rbp-4]
//         mov     rdi, rax
//         call    Name::fun()
//         mov     eax, 0
//         leave
//         ret
#include <iostream>
#include <typeinfo>
#include <dlfcn.h>

class Base {
public:
  virtual ~Base(){};
  virtual void f() {}
  virtual void g() {}
  virtual void t() {}
};
class Drived: public Base{
    void f(){}
};

int main() {
  Base b;
  const std::type_info& ti = typeid(b);
  Dl_info dli;
  dladdr(ti.name(), &dli);
  void** vtable = *reinterpret_cast<void***>(&b);
  std::cout << "vtable address: " << vtable << '\n';
  std::cout << "vtable symbol: " << dli.dli_sname << '\n';

  for (int i = 0; vtable[i] != nullptr; ++i) {
    std::cout << "vtable[" << i << "]: " << vtable[i] << '\n';
    Dl_info dli;
    dladdr(vtable[i], &dli);
    std::cout << "  symbol: " << dli.dli_sname << '\n';
  }

  return 0;
}
