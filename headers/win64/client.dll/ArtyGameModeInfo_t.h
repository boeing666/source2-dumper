#pragma once

struct ArtyGameModeInfo_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< ArtyGameModeLevelInfo_t > m_vecLevels; // offset 0x8, size 0x18, align 8
};
