#pragma once

class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 visual_height; // offset 0x1A78, size 0x4, align 4
    float32 animation_rate; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    bool m_bPullComplete; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    uint32 m_TreeId; // offset 0x1A88, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0x1A8C, size 0x4, align 4
    int32 m_nDamageTicks; // offset 0x1A90, size 0x4, align 4
    int32 m_nTicksApplied; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_flLastTick; // offset 0x1A98, size 0x4, align 255
    CHandle< CDOTA_TempTree > m_hTree; // offset 0x1A9C, size 0x4, align 4
    CDOTA_Tree* m_pTree; // offset 0x1AA0, size 0x8, align 8
    VectorWS m_vPullPosition; // offset 0x1AA8, size 0xC, align 4
    Vector m_vDir; // offset 0x1AB4, size 0xC, align 4
};
