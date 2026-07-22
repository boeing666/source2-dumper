#pragma once

struct ArtyLevelWeaponInstance_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    CUtlString m_szName; // offset 0x0, size 0x8, align 8 | MPropertyCustomFGDType
    char _pad_0008[0x4]; // offset 0x8
    int32 m_nReloads; // offset 0xC, size 0x4, align 4
};
