// util.h
//
// Copyright (c) 2019 Kristofer Berggren
// All rights reserved.
//
// nchat is distributed under the MIT license, see LICENSE for details.

#pragma once

#include <string>
#include <vector>

class Util
{
public:
  static std::string GetConfigDir();
  static void SetConfigDir(const std::string& p_Path);
  static int GetKeyCode(const std::string& p_KeyName);
  static std::vector<std::wstring> WordWrap(std::wstring p_Text, unsigned p_LineLength);
  static std::vector<std::wstring> WordWrap(std::wstring p_Text, unsigned p_LineLength,
                                            int p_Pos, int& p_WrapLine, int& p_WrapPos);
  static std::vector<std::string> WordWrap(std::string p_Text, unsigned p_LineLength);
  static std::vector<std::string> WordWrap(std::string p_Text, unsigned p_LineLength,
                                           int p_Pos, int& p_WrapLine, int& p_WrapPos);
  static std::string ToString(const std::wstring& p_WStr);
  static std::wstring ToWString(const std::string& p_Str);
  static std::string TrimPadString(const std::string& p_Str, size_t p_Len);
  static std::wstring TrimPadWString(const std::wstring& p_Str, size_t p_Len);
  static std::string GetAppVersion();
  static std::string GetOs();
  static std::string GetCompiler();
  static void RegisterSignalHandler();
  static void SignalHandler(int p_Signal);
  static std::string BacktraceSymbolsStr(void* p_Callstack[], int p_Size);
  static void InitStdErrRedirect(const std::string& p_Path);
  static void CleanupStdErrRedirect();

private:
  static std::string m_ConfigDir;
  static int m_OrgStdErr;
  static int m_NewStdErr;
};

