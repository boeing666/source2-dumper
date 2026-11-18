#pragma once

class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 mana_leak_pct; // offset 0x1AF8, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1AFC, size 0xC, align 4
    bool bResetPosition; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    float32 m_fAccumulatedManaLeak; // offset 0x1B0C, size 0x4, align 4
};
