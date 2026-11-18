#pragma once

class CDOTA_Modifier_Necrolyte_ReapersScythe : public CDOTA_Modifier_Stunned /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 stun_duration; // offset 0x1AF8, size 0x4, align 4
    bool m_bIllusion; // offset 0x1AFC, size 0x1, align 1
    bool m_bArcWardenClone; // offset 0x1AFD, size 0x1, align 1
    bool m_bSpiritBear; // offset 0x1AFE, size 0x1, align 1
    char _pad_1AFF[0x1]; // offset 0x1AFF
};
