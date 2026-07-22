#pragma once

class CMatch3OpponentActionInstanceDefinition  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sActionName; // offset 0x0, size 0x8, align 8
    float32 m_flCooldown; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    KeyValues3 m_kvActionParams; // offset 0x10, size 0x10, align 8
};
