#include "pch.h"
#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	POO::MyForm monFormulaire;
	
	std::cout << "Hello World!" << std::endl;
	
	Application::Run(% monFormulaire);
}