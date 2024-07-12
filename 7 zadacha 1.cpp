#include <iostream> 
#define MODE 1 
#if !defined MODE 
#error Необходимо определить MODE 
#endif 

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    int a, b;


#ifdef MODE  

#if MODE == 0 
    std::cout << "Работаю в режиме тренировки" << std::endl;


#elif MODE == 1 
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число : ";
    std::cin >> a;
    std::cout << "Введите число: ";
    std::cin >> b;
    std::cout << Add(a, b) << std::endl;


#else  
    std::cout << "Неизвестный режим.Завершение работы" << std::endl;
#endif 
#endif 

#ifndef MODE 
    std::cout << "Необходимо определить MODE" << std::endl;
#endif 

    return 0;

}