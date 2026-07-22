#pragma once

struct ArtyGameModeLevelInfo_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    CUtlString m_szLevelName; // offset 0x0, size 0x8, align 8
    ArtyLevelID_t m_unLevelID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
};
