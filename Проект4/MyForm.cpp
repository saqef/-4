#include "MyForm.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	������4::MyForm form;
	Application::Run(%form);
}

