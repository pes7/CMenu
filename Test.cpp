#include "stdafx.h"
#include "CMenu.cpp"


void test();
int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251); // ���� � ������� � ��������� 1251
	SetConsoleOutputCP(1251);

	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	int slots = 0;
	Menu *menu = NULL;

	menu = CMenu(menu, 3);

	menu->text[menu->slots].str = "D)����";
	menu->binds[menu->slots].binds = "D�";
	menu->pointers[menu->slots] = (int)(void*)&test;
	menu->slots++;

	menu->text[menu->slots].str = "F)���";
	menu->binds[menu->slots].binds = "F�";
	menu->pointers[menu->slots] = (int)(void*)&test;
	menu->slots++;

	menu->text[menu->slots].str = "G)����";
	menu->binds[menu->slots].binds = "G�";
	menu->pointers[menu->slots] = (int)(void*)&test;

	menu->properties.header = "���� ���������:";
	menu->properties.height = 0;
	menu->properties.coords.x = 7;
	menu->properties.coords.y = 4;
	menu->properties.size.height = 14;
	menu->properties.size.width = 30;
	menu->properties.dbreak.binds = "P�";
	menu->properties.prioritet = 0;

	SmartChoose(menu);

	_getch();
}

void test() {
	printf_s("It's works");
	_getch();
}