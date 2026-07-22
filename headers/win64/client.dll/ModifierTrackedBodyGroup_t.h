#pragma once

struct ModifierTrackedBodyGroup_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strBodygroupName; // offset 0x0, size 0x8, align 8
    int32 m_nRestoreValue; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
