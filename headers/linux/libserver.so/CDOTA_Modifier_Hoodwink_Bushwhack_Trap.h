#pragma once

class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 visual_height; // offset 0x1AA8, size 0x4, align 4
    float32 animation_rate; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    bool m_bPullComplete; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    uint32 m_TreeId; // offset 0x1AB8, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0x1ABC, size 0x4, align 4
    int32 m_nDamageTicks; // offset 0x1AC0, size 0x4, align 4
    int32 m_nTicksApplied; // offset 0x1AC4, size 0x4, align 4
    GameTime_t m_flLastTick; // offset 0x1AC8, size 0x4, align 255
    CHandle< CDOTA_TempTree > m_hTree; // offset 0x1ACC, size 0x4, align 4
    CDOTA_Tree* m_pTree; // offset 0x1AD0, size 0x8, align 8
    VectorWS m_vPullPosition; // offset 0x1AD8, size 0xC, align 4
    Vector m_vDir; // offset 0x1AE4, size 0xC, align 4
};
