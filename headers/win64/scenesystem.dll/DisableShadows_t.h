#pragma once

enum DisableShadows_t : uint8_t  // sizeof 0x1
{
    kDisableShadows_None = 0,
    kDisableShadows_All = 1,
    kDisableShadows_Baked = 2,
    kDisableShadows_Realtime = 3,
    kDisableShadows_ReallyNone = 4,
};
