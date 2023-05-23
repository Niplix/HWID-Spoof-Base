#pragma once
#include <TlHelp32.h>
#include <random>
#include <fstream>
namespace Helper
{

    void sno(std::string command)
    {
        command.insert(0, "/C ");

        SHELLEXECUTEINFOA ShExecInfo = { 0 };
        ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
        ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
        ShExecInfo.hwnd = NULL;
        ShExecInfo.lpVerb = NULL;
        ShExecInfo.lpFile = "cmd.exe";
        ShExecInfo.lpParameters = command.c_str();
        ShExecInfo.lpDirectory = NULL;
        ShExecInfo.nShow = SW_HIDE;
        ShExecInfo.hInstApp = NULL;

        if (ShellExecuteExA(&ShExecInfo) == FALSE)
            WaitForSingleObject(ShExecInfo.hProcess,
            INFINITE);

        DWORD rv;
        GetExitCodeProcess(ShExecInfo.hProcess, &rv);
        CloseHandle(ShExecInfo.hProcess);
    }

    bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size)
    {
        std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

        if (!file_ofstream.write(address, size))
        {
            file_ofstream.close();
            return false;
        }

        file_ofstream.close();
        return true;
    }

    bool ReadFileToMemory(const std::string& file_path, std::vector<uint8_t>* out_buffer)
    {
        std::ifstream file_ifstream(file_path, std::ios::binary);

        if (!file_ifstream)
            return false;

        out_buffer->assign((std::istreambuf_iterator<char>(file_ifstream)), std::istreambuf_iterator<char>());
        file_ifstream.close();

        return true;
    }

    std::string random_string(const int len) {
        const std::string alpha_numeric("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, alpha_numeric.size() - 1);
        std::string str(len, 0);
        for (int i = 0; i < len; ++i) {
            str[i] = alpha_numeric[dis(gen)];
        }
        return str;
    }


}
