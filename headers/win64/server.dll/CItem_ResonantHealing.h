#pragma once

class CItem_ResonantHealing : public CCitadel_Item /*0x0*/  // sizeof 0x16F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D4]; // offset 0x0
    bool m_bForceModUpdate; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x3]; // offset 0x14D5
    int32 m_iResonantHealingRegenStacks; // offset 0x14D8, size 0x4, align 4
    char _pad_14DC[0x214]; // offset 0x14DC
};
