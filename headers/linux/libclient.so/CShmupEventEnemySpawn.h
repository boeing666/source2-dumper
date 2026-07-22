#pragma once

class CShmupEventEnemySpawn  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strEnemyName; // offset 0x0, size 0x8, align 8
    bool m_bRed; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    Vector m_vOffset; // offset 0xC, size 0xC, align 4
    char _pad_0018[0x8]; // offset 0x18
};
