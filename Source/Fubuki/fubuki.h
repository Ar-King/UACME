/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018
*
*  TITLE:       FUBUKI.H
*
*  VERSION:     2.89
*
*  DATE:        14 June 2018
*
*  Fubuki global include header file.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

#if !defined UNICODE
#error ANSI build is not supported
#endif

//disable nonmeaningful warnings.
#pragma warning(disable: 4005) // macro redefinition
#pragma warning(disable: 4055) // %s : from data pointer %s to function pointer %s
#pragma warning(disable: 4152) // nonstandard extension, function/data pointer conversion in expression
#pragma warning(disable: 4201) // nonstandard extension used : nameless struct/union
#pragma warning(disable: 6102) // Using %s from failed function call at line %u

#include <windows.h>
#include "shared\ntos.h"
#include <ntstatus.h>
#include "shared\minirtl.h"
#include "shared\_filename.h"
#include "shared\util.h"
#include "shared\windefend.h"
#include "unbcl.h"
#include "wbemcomn.h"

#if (_MSC_VER >= 1900) 
#ifdef _DEBUG
#pragma comment(lib, "vcruntimed.lib")
#pragma comment(lib, "ucrtd.lib")
#else
#pragma comment(lib, "libvcruntime.lib")
#endif
#endif

#define LoadedMsg      TEXT("Fubuki lock and loaded")

//default execution flow
#define AKAGI_FLAG_KILO  1

//suppress all additional output
#define AKAGI_FLAG_TANGO 2
