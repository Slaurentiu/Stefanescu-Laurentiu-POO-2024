#include "pch.h"
#include "MyForm.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew MyCalculator::MyForm());
  return 0;
}