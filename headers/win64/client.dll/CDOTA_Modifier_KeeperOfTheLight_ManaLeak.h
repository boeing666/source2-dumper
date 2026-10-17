#pragma once

class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 mana_leak_pct; // offset 0x1AA8, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1AAC, size 0xC, align 4
    bool bResetPosition; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    float32 m_fAccumulatedManaLeak; // offset 0x1ABC, size 0x4, align 4
};
