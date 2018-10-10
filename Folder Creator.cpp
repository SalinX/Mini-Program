//this application was created by SalinX
//written on October 10, 2018
//if you have a solution to the mode B of this program, please contact me by email: SalinX79@outlook.com
//thank you very much
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char modeSelect,judge,cheat;
	string folderName,mkdir,runner,cd,dOpen;
	stringstream runnerss;
	int i,n;
	system("@echo off");
	system("title Folder Creator-Alpha Version");
	cout<<"Welcome to Folder Creator"<<endl;
	cout<<"This Application Will Help You Easily Create Multiple Folders"<<endl;
	cout<<"Without Tedious to Create A Separate Folder"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"Before Running This Application"<<endl;
	cout<<"Be Sure That This Application Is Running Under The Directory Where You Need To Create A Folder"<<endl;
	cout<<"And Running This Application As An Administrator"<<endl;
	cout<<"If Not, Please Close This Application And Follow This Prompt"<<endl;
	cout<<"Are You Ready?(Y/N)"<<endl;
	cin>>judge;
	if (judge=='N'||judge=='n')
	{
		cout<<"Follow The Steps And Come Back!"<<endl;
		system("pause");
		exit(0);
	}
	else system("cls");
	cout<<"Let's Get Start!'"<<endl;
	//cout<<"Select A Folder Creation Mode"<<endl;
	//cout<<"Mode A:Create Folders In Bulk Under One Directory"<<endl;
	//cout<<"Or"<<endl;
	//cout<<"Mode B:Create A Multi-Layer Folder"<<endl;
	//cout<<"Type A Or B To Choose Mode"<<endl;
	//cin>>modeSelect;
	//if (modeSelect=='A'||modeSelect=='a')
	{
		cout<<"Type The Number Of Created Folders"<<endl;
		cin>>n;
		cout<<"Type The Name Of The Folder"<<endl;
		cin>>folderName;
		cout<<"Select The File Naming Names"<<endl;
		cout<<"A:Number+Name Or B:Name+Number"<<endl;
		cin>>judge;
		if (judge=='A'||judge=='a')
		{
			system("cls");
			system("@echo off");
			cout<<"Creating Folders...Please Wait..."<<endl;
			for (i=1;i<=n;i++)
			{
				system("@echo off");
				cheat=' ';
				mkdir="mkdir ";
				runnerss<<i<<folderName<<cheat;
				runnerss>>runner;
				runner=mkdir+runner;
				system(runner.c_str());
			}
			cout<<"Folder Created"<<endl;
			system("pause");
			exit(0);
		}
		if (judge=='B'||judge=='b')
		{
			system("cls");
			system("@echo off");
			cout<<"Creating Folders...Please Wait..."<<endl;
			for (i=1;i<=n;i++)
			{
				system("@echo off");
				cheat=' ';
				mkdir="mkdir ";
				runnerss<<folderName<<i<<cheat;
				runnerss>>runner;
				runner=mkdir+runner;
				system(runner.c_str());
			}
			cout<<"Folder Created"<<endl;
			system("pause");
			exit(0);
		}
	}
	//if (modeSelect=='B'||modeSelect=='b')
	//{
	//	cout<<"Type The Number Of Layers To Create The Folder"<<endl;
	//	cin>>n;
	//	cout<<"Type The Name Of The Folder"<<endl;
	//	cin>>folderName;
	//	system("cls");
	//	system("@echo off");
	//	cout<<"Creating Folders...Please Wait..."<<endl;
	//	for (i=1;i<=n;i++)
	//	{
	//		system("@echo off");
	//		runner=' ';
	//		dOpen=' ';
	//		mkdir="mkdir ";
	//		cd="chdir ";
	//		runner=runner+mkdir+folderName;
	//		system(runner.c_str());
	//		dOpen=dOpen+cd+folderName;
	//		system(dOpen.c_str());
	//		system(dOpen.c_str());
	//	}
	//	cout<<"Folder Created"<<endl;
	//	system("pause");
	//	exit(0);
	//}
	return 0;
}

