#pragma once
#include "includes.h"
#include "helper.h"
#include "amidevol.h"
#include "clean.h"
#include <filesystem>

namespace Spoof
{
	void start(), StopTasks();

	bool ReadFileToMemory(const std::string& file_path, std::vector<uint8_t>* out_buffer);
	bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size);

#pragma region SPOOF
	void Spoof()
	{
		
		StopTasks();

		_mkdir(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase")
		);
		
		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\1.exe"),
			reinterpret_cast<const char*>(Cleaner1_exe),
			sizeof(Cleaner1_exe)
		);

		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\1.exe")
		); 

		Sleep(5000);

		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\2.exe"),
			reinterpret_cast<const char*>(Cleaner2_exe),
			sizeof(Cleaner2_exe)
		);

		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\2.exe")
		); 

		Sleep(5000);

		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\3.exe"),
			reinterpret_cast<const char*>(Cleaner3_exe),
			sizeof(Cleaner3_exe)
		);

		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\3.exe")
		); 

		Sleep(5000);

		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\4.exe"),
			reinterpret_cast<const char*>(Cleaner4_exe),
			sizeof(Cleaner4_exe)
		);

		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\4.exe")
		); 

		Sleep(5000);

		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\5.exe"),
			reinterpret_cast<const char*>(Cleaner5_exe),
			sizeof(Cleaner5_exe)
		);

		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\5.exe")
		); 

		Sleep(5000);

		Helper::CreateFileFromMemory(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\6.exe"),
			reinterpret_cast<const char*>(Cleaner6_exe),
			sizeof(Cleaner6_exe)
		);
		Helper::sno(
			("C:\\ProgramData\\Microsoft\\Settings\\FreeSpoofBase\\6.exe")
		); 

		Sleep(5000);

		Beep(800, 50);

		Helper::CreateFileFromMemory(
			("C:\\Windows\\System32\\accessibility.dll"),
			reinterpret_cast<const char*>(accessibility_dll),
			sizeof(accessibility_dll)
		);

		Helper::CreateFileFromMemory(
			("C:\\Windows\\System32\\amifldrv64.sys"),
			reinterpret_cast<const char*>(amifldrv64_sys),
			sizeof(amifldrv64_sys)
		);

		Helper::CreateFileFromMemory(
			("C:\\Windows\\System32\\ifsutipx.exe"),
			reinterpret_cast<const char*>(ifsutipx_exe),
			sizeof(ifsutipx_exe)
		);

		Helper::CreateFileFromMemory(
			("C:\\Windows\\AppVLicense.dll"),
			reinterpret_cast<const char*>(AppVLicense_dll),
			sizeof(AppVLicense_dll)
		);
		Helper::CreateFileFromMemory(
			("C:\\Windows\\ntelidcx.dll"),
			reinterpret_cast<const char*>(ntelidcx_dll),
			sizeof(ntelidcx_dll)
		);

		start();
		Sleep(1500);
 
		remove(
			("C:\\Windows\\System32\\accessibility.dll")
		);

		remove(
			("C:\\Windows\\System32\\amifldrv64.sys")
		);

		remove(
			("C:\\Windows\\System32\\ifsutipx.exe")
		);

		Helper::sno(
			("C:\\Windows\\ntelidcx.dll")
		);

		Sleep(10000);


		system(
			("shutdown /r /t 25")
		);
		remove(
			("C:\\Windows\\ntelidcx.dll")
		);

		Helper::sno(
			("C:\\Windows\\AppVLicense.dll")
		);

		Sleep(1000);
		remove(
			("C:\\Windows\\AppVLicense.dll")
		);

	}
#pragma endregion

#pragma region Run
	void Run()
	{
		std::thread sleepThread([]()
			{
				Spoof();

			});

		sleepThread.detach();
	}
#pragma endregion

#pragma region start


	void start() {

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll /accepteula")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll /accepteula")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll C: %random:~-1%%random:~-1%%random:~-1%%random:~-1%-%random:~-1%%random:~-1%%random:~-1%%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll D: %random:~-1%%random:~-1%%random:~-1%%random:~-1%-%random:~-1%%random:~-1%%random:~-1%%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll E: %random:~-1%%random:~-1%%random:~-1%%random:~-1%-%random:~-1%%random:~-1%%random:~-1%%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll F: %random:~-1%%random:~-1%%random:~-1%%random:~-1%-%random:~-1%%random:~-1%%random:~-1%%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll G: %random:~-1%%random:~-1%%random:~-1%%random:~-1%-%random:~-1%%random:~-1%%random:~-1%%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\accessibility.dll")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /SS %random%%random%%random%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /BS %random%%random%%random%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /SU auto")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /IV %random:~-1%.%random:~-1%.%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /ID  0%random:~-1%/0%random:~-1%/2021")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /SP MS-%random:~-1%C%random:~-1%%random:~-1%F")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /SK A%random:~-1%%random:~-1%%random:~-1%S%random:~-1%%random:~-1%%random:~-1%O%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /SF B%random:~-1%%random:~-1%%random:~-1%S%random:~-1%%random:~-1%%random:~-1%Z%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
		("C:\\Windows\\System32\\ifsutipx.exe /BT X%random:~-1%%random:~-1%%random:~-1%S%random:~-1%%random:~-1%%random:~-1%X%random:~-1%")
		);

		Sleep(1000);

		Helper::sno(
			("C:\\Windows\\System32\\ifsutipx.exe /PSN %random%%random%%random%")
		);

		Sleep(1500);


	}
#pragma endregion

#pragma region Tasks
	void StopTasks()
	{
		system(
		("sc stop HTTPDebuggerPro >nul 2>&1")
		);
		system(
		("sc stop KProcessHacker3 >nul 2>&1")
		);
		system(
		("sc stop KProcessHacker2 >nul 2>&1")
		);
		system(
		("sc stop KProcessHacker1 >nul 2>&1")
		);
		system(
		("sc stop wireshark >nul 2>&1")
		);
		system(
		("sc stop cpuz150 >nul 2>&1")
		);
		system(
		("sc stop vgt >nul 2>&1")
		);
		system(
		("sc stop vgrl >nul 2>&1")
		);
		system(
		("sc stop vgk >nul 2>&1")
		);
		system(
		("sc stop vgc >nul 2>&1")
		);
		system(
		("sc delete vgrl >nul 2>&1")
		);
		system(
		("sc delete vgk >nul 2>&1")
		);
		system(
		("sc delete vgc >nul 2>&1")
		);
		system(
		("sc delete vg >nul 2>&1")
		);
		system(
		("taskkill / f / im vgtray.exe >nul 2>&1")
		);
		system(
		("sc delete cpuz150 >nul 2>&1")
		);
		system(
		("sc config wuauserv start = disabled >nul 2>&1")
		);
		system(
		("net stop wuauserv >nul 2>&1")
		);
		system(
		("sc config bits start = disabled >nul 2>&1")
		);
		system(
		("net stop bits >nul 2>&1")
		);
		system(
		("sc config dosvc start = disabled >nul 2>&1")
		);
		system(
		("net stop dosvc >nul 2>&1")
		);
		system(
		("sc config UsoSvc start = disabled >nul 2>&1")
		);
		system(
		("net stop UsoSvc >nul 2>&1")
		);
		system(
		("taskkill / f / im smartscreen.exe")
		);
		system(
		("taskkill / f / im EasyAntiCheat.exe")
		);
		system(
		("taskkill / f / im dnf.exe")
		);
		system(
		("taskkill / f / im DNF.exe")
		);
		system(
		("taskkill / f / im CrossProxy.exe")
		);
		system(
		("taskkill / f / im tensafe_1.exe")
		);
		system(
		("taskkill / f / im TenSafe_1.exe")
		);
		system(
		("taskkill / f / im tensafe_2.exe")
		);
		system(
		("taskkill / f / im tencentdl.exe")
		);
		system(
		("taskkill / f / im TenioDL.exe")
		);
		system(
		("taskkill / f / im uishell.exe")
		);
		system(
		("taskkill / f / im BackgroundDownloader.exe")
		);
		system(
		("taskkill / f / im conime.exe")
		);
		system(
		("taskkill / f / im QQDL.EXE")
		);
		system(
		("taskkill / f / im qqlogin.exe")
		);
		system(
		("taskkill / f / im dnfchina.exe >nul 2>&1")
		);
		system(
		("taskkill / f / im dnfchinatest.exe")
		);
		system(
		("taskkill / f / im dnf.exe")
		);
		system(
		("taskkill / f / im txplatform.exe")
		);
		system(
		("taskkill / f / im TXPlatform.exe")
		);
		system(
		("taskkill / f / im OriginWebHelperService.exe")
		);
		system(
		("taskkill / f / im Origin.exe")
		);
		system(
		("taskkill / f / im OriginClientService.exe")
		);
		system(
		("taskkill / f / im OriginER.exe")
		);
		system(
		("taskkill / f / im OriginThinSetupInternal.exe")
		);
		system(
		("taskkill / f / im OriginLegacyCLI.exe")
		);
		system(
		("taskkill / f / im Agent.exe")
		);
		system(
		("taskkill / f / im Client.exe")
		);

	}
#pragma endregion

}
