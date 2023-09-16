// caesar_sipher.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


std::string cryptographer(std::string text, int key);




int main()
{
    setlocale(LC_ALL, "RUS");
    std::cout << "Задание 1. Шифр Цезаря\n\n";

 
    // рабочее приведение..
   /* std::string text;
    std::cin >> text;
    std::string result;
    int f;
    std::cin >> f;
    result = text[0] + f;
    std::cout << result;
    */

    std::string text;
    std::getline(std::cin, text);
    std::string result = "";
    //std::cout << int('s');
    int key;
    std::cin >> key;

    for (int i = 0; i < text.length() ; i++)
   {
        //для строчных букав
       if (text[i] >= 'a' && text[i] <= 'z') 
        {
            if (text[i] + key < 97)
            {
                result += ('z' + 1) - ('a' - key - text[i]);
            }
           else
           {
               result += ((text[i] - 'a') + key) % 26 + 'a';
           }
          
        }
       // для заглавных букав
       else if (text[i] >= 'A' && text[i] <= 'Z')
       {
            if (text[i] + key < 65)
             {
                result += ('Z' + 1) - ('A' - key - text[i]);
             }
            else
           {
               result += ((text[i] - 'A') + key) % 26 + 'A';
           }
          
       }
       // если не буквы
        else
        {
           result += text[i];
        }
    }
    // ответ
    std::cout << result << std::endl;
    //result+= ('z' + 1) - (key - ( text[i] - 'a' ));
}

std::string cryptographer(std::string text, int key, std::string result)
{
    for (int i = 0; i < text.length(); i++)
    {
        //для строчных букав
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (text[i] + key < 97)
            {
                result += ('z' + 1) - ('a' - key - text[i]);
            }
            else
            {
                result += ((text[i] - 'a') + key) % 26 + 'a';
            }

        }
        // для заглавных букав
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (text[i] + key < 65)
            {
                result += ('Z' + 1) - ('A' - key - text[i]);
            }
            else
            {
                result += ((text[i] - 'A') + key) % 26 + 'A';
            }

        }
        // если не буквы
        else
        {
            result += text[i];
        }
    }
    return result;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
