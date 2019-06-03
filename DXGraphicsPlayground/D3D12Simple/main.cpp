#include "../Common/Win32App.h"
#include "SimpleRenderer.h"
#include <string>

int main(int argc, char** argv) {
	string title = u8"Simple";

	Win32App app(title);
	app.setRenderer(new SimpleRenderer());
	app.createWindow(800, 600);
	app.show();
	return app.messageLoop();
}