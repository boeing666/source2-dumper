#pragma once

class CDOTA_Modifier_Necrolyte_ReapersScythe : public CDOTA_Modifier_Stunned /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 stun_duration; // offset 0x1A58, size 0x4, align 4
    bool m_bIllusion; // offset 0x1A5C, size 0x1, align 1
    bool m_bArcWardenClone; // offset 0x1A5D, size 0x1, align 1
    bool m_bSpiritBear; // offset 0x1A5E, size 0x1, align 1
    char _pad_1A5F[0x1]; // offset 0x1A5F
};
