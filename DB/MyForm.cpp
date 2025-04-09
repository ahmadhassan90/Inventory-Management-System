#include "MyForm.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DB::MyForm form;
	Application::Run(% form);
}
