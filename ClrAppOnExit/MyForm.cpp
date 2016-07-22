#include "MyForm.h"
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

int fn1()
{
	return 0;
}

[STAThread]
int main(array<String^>^ args)
{
	_onexit(fn1);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ClrAppOnExit::MyForm form;
	Application::Run(%form);
}