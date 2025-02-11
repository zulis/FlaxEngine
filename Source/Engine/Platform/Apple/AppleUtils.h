// Copyright (c) 2012-2023 Wojciech Figat. All rights reserved.

#pragma once

#if PLATFORM_MAC || PLATFORM_IOS

#include "Engine/Core/Types/String.h"
#include <CoreFoundation/CoreFoundation.h>

// Apple platform utilities.
class AppleUtils
{
public:
    static String ToString(CFStringRef str);
    static CFStringRef ToString(const StringView& str);
#if PLATFORM_MAC
    static Float2 PosToCoca(const Float2& pos);
    static Float2 CocaToPos(const Float2& pos);
    static Float2 GetScreensOrigin();
#endif
};

#endif
