#pragma once

class CDOTA_Modifier_Treant_EyesInTheForest_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 hits_to_kill; // offset 0x1AA8, size 0x4, align 4
    float32 vision_aoe; // offset 0x1AAC, size 0x4, align 4
    CDOTA_Tree* m_Tree; // offset 0x1AB0, size 0x8, align 8
    CHandle< CBaseEntity > m_hTree; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    bool m_bUpgradedVision; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
