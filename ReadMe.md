#CMenu
####Визуализироване меню, которое очень простое в использовании.
##Инструкция по использувании:
#####Вставляем код в свой
        #include "CMenu.cpp"
#####Прописать очитку екрана
        hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
#####Задать базовые переменные
        int slots = 0;
        Menu *menu = NULL;
#####Выделить память на меню, цифра 3 - количество пунктов
        menu = CMenu(menu, 3);
#####Создать тело пункта
        //Название пункта
        menu->text[menu->slots].str = "D)Стек";
        //Кнопки нажатия которых связывают с етим пунктом
        menu->binds[menu->slots].binds = "DВ";
        //Число забиндженых кнопок
        menu->binds[menu->slots].count = 2;
        //Указатель на функцию которая привязана к етому пункту
        menu->pointers[menu->slots] = (int)(void*)&stek_menu;
        //Показуем что будет еще один пункт меню
        menu->slots++;
#####Создать тело меню
        menu->properties.header = "Меню программы:";
        menu->properties.height = 0;
        menu->properties.coords.x = 7;
        menu->properties.coords.y = 4;
        menu->properties.size.height = 14;
        menu->properties.size.width = 30;
        menu->properties.dbreak.binds = "PЗ";
        menu->properties.dbreak.count = 2;
        menu->properties.prioritet = 0;
#####Вызвать функцию создания меню
        SmartChoose(menu);
##Полный пример:
        hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

        int slots = 0;
        Menu *menu = NULL;

        menu = CMenu(menu, 3);

        menu->text[menu->slots].str = "D)Стек";
        menu->binds[menu->slots].binds = "DВ";
        menu->binds[menu->slots].count = 2;
        menu->pointers[menu->slots] = (int)(void*)&stek_menu;
        menu->slots++;

        menu->text[menu->slots].str = "F)Дек";
        menu->binds[menu->slots].binds = "FА";
        menu->binds[menu->slots].count = 2;
        menu->pointers[menu->slots] = (int)(void*)&dek_menu;
        menu->slots++;

        menu->text[menu->slots].str = "G)Лист";
        menu->binds[menu->slots].binds = "GП";
        menu->binds[menu->slots].count = 2;
        menu->pointers[menu->slots] = (int)(void*)&sap;

        menu->properties.header = "Меню программы:";
        menu->properties.height = 0;
        menu->properties.coords.x = 7;
        menu->properties.coords.y = 4;
        menu->properties.size.height = 14;
        menu->properties.size.width = 30;
        menu->properties.dbreak.binds = "PЗ";
        menu->properties.dbreak.count = 2;
        menu->properties.prioritet = 0;

        SmartChoose(menu);