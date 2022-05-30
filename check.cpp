//
// Created by Максим Уланов on 24.05.2022.
//
#include <iostream>


int CheckDay()
{
    while (true)
    {
        std::cout << "День: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>30))
        {
            std::cout<<"Введите нормально день\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}

int CheckDay1()
{
    while (true)
    {
        std::cout << "День: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>29))
        {
            std::cout<<"Введите нормально день\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}

int CheckDay2()
{
    while (true)
    {
        std::cout << "День: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>31))
        {
            std::cout<<"Введите нормально день\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}

int CheckDay3()
{
    while (true)
    {
        std::cout << "День: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>28))
        {
            std::cout<<"Введите нормально день\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}

int CheckYear()
{
    while (true)
    {
        std::cout << "Год: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>2022))
        {
            std::cout<<"Год нужно вводить без посторонних символов в промежутке от 1 до 2022\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}

int CheckMonth()
{
    while (true)
    {
        std::cout << "Месяц: ";
        int a;
        std::cin >> a;

        if (std::cin.fail() or (a <=0) or (a>12))
        {
            std::cout<<"Месяц нужно вводить без посторонних символов в промежутке от 1 до 12\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}


double CheckPrice()
{
    while (true)
    {
        std::cout << "Цена письма: ";
        double a;
        std::cin >> a;

        if (std::cin.fail())
        {
            std::cout<<"Введите нормально пожалуйста\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
        else
            return a;
    }
}


std::string CheckRecipientCountry()
{
    int i;
    std::string str;
    do{
        std::cout<<"Страна получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Страну нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckRecipientCity()
{
    int i;
    std::string str;
    do{
        std::cout<<"Город получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Город нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckRecipientBuilding()
{
    int i;
    std::string str;
    do{
        std::cout<<"Строение получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if( (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{') )
                break;
        }

        if( str[i]){std::cout<<"Строение нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}

std::string CheckSenderCountry()
{
    int i;
    std::string str;
    do{
        std::cout<<"Страна отправителя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Страну нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckSenderCity()
{
    int i;
    std::string str;
    do{
        std::cout<<"Город отправителя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Город нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckSenderBuilding()
{
    int i;
    std::string str;
    do{
        std::cout<<"Строение отправителя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if( (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{') )
                break;
        }

        if( str[i]){std::cout<<"Строение нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}


std::string CheckRecipientName()
{
    int i;
    std::string str;
    do{
        std::cout<<"Имя получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Имя нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckRecipientSurname()
{
    int i;
    std::string str;
    do{
        std::cout<<"Фамилия получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Фамилию нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}
std::string CheckRecipientPatronymic()
{
    int i;
    std::string str;
    do{
        std::cout<<"Отчество получателя: ";
        std::cin>>str;

        for(i=0;str[i];i++)
        {
            if((str[i]>='0' and str[i]<='9' and str[i]) or (str[i]<='/' and str[i]>='!') or (str[i]<='@' and str[i]>=':') or (str[i]<='`' and str[i]>='[') or (str[i]<='~' and str[i]>='{'))
                break;
        }

        if( str[i]){std::cout<<"Отчество нужно вводить без посторонних символов"<<std::endl<<"Повторите ввод"<<std::endl; }

    }while(str[i]);

    return str;
}