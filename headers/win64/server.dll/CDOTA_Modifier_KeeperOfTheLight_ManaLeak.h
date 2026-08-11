#pragma once

class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 mana_leak_pct; // offset 0x1A78, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A7C, size 0xC, align 4
    bool bResetPosition; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    float32 m_fAccumulatedManaLeak; // offset 0x1A8C, size 0x4, align 4
};
