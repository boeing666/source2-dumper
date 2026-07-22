#pragma once

class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 mana_leak_pct; // offset 0x1A58, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A5C, size 0xC, align 4
    bool bResetPosition; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x3]; // offset 0x1A69
    float32 m_fAccumulatedManaLeak; // offset 0x1A6C, size 0x4, align 4
};
