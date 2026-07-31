#pragma once

class CDOTA_Modifier_Beastmaster_WildAxes : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vLeftControl; // offset 0x1A78, size 0xC, align 4
    VectorWS m_vRightControl; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1A90, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1A9C, size 0xC, align 4
    float32 m_flAxeDuration; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_flAxeDieTime; // offset 0x1AAC, size 0x4, align 255
    bool m_bReturning; // offset 0x1AB0, size 0x1, align 1
    bool m_bCatchingAxes; // offset 0x1AB1, size 0x1, align 1
    char _pad_1AB2[0x6]; // offset 0x1AB2
    CUtlVector< CHandle< C_BaseEntity > > m_hAxes; // offset 0x1AB8, size 0x18, align 8
    ParticleIndex_t[2] m_nAxeFXIndex; // offset 0x1AD0, size 0x8, align 4
    CUtlVector< CHandle< C_BaseEntity > >[2] m_hHitList; // offset 0x1AD8, size 0x30, align 8
    float32 radius; // offset 0x1B08, size 0x4, align 4
    float32 spread; // offset 0x1B0C, size 0x4, align 4
    float32 axe_damage; // offset 0x1B10, size 0x4, align 4
    float32 duration; // offset 0x1B14, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1B18, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1B1C, size 0x4, align 4
};
