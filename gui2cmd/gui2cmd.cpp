#include <Windows.h>

#include "../../lsMisc/CommandLineString.h"
#include "../../lsMisc/OpenCommon.h"

using namespace Ambiesoft;

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	CCommandLineString commandLine;
	return OpenCommon(nullptr,
		commandLine.getArg(1).c_str(),
		commandLine.subString(2).c_str());
}
