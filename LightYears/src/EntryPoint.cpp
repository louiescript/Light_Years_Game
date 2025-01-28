#include "EntryPoint.h"

int main()
{
	ly::App* app = GetApp();
	app->Run();
	delete app;

	//allocating the heap. entire application to heap
	//ly::App* app = new ly::App();
	//app->Run();

	//allocating using unique ptr
	//std::unique_ptr<ly::App> app{ std::make_unique<ly::App>() };
	//app->Run();
}