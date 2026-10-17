#pragma once

class CDOTA_Modifier_Beastmaster_WildAxes : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vLeftControl; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vRightControl; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x1AC0, size 0xC, align 4
    VectorWS m_vSourceLoc; // offset 0x1ACC, size 0xC, align 4
    float32 m_flAxeDuration; // offset 0x1AD8, size 0x4, align 4
    GameTime_t m_flAxeDieTime; // offset 0x1ADC, size 0x4, align 255
    bool m_bReturning; // offset 0x1AE0, size 0x1, align 1
    bool m_bCatchingAxes; // offset 0x1AE1, size 0x1, align 1
    char _pad_1AE2[0x6]; // offset 0x1AE2
    CUtlVector< CHandle< C_BaseEntity > > m_hAxes; // offset 0x1AE8, size 0x18, align 8
    ParticleIndex_t[2] m_nAxeFXIndex; // offset 0x1B00, size 0x8, align 4
    CUtlVector< CHandle< C_BaseEntity > >[2] m_hHitList; // offset 0x1B08, size 0x30, align 8
    float32 radius; // offset 0x1B38, size 0x4, align 4
    float32 spread; // offset 0x1B3C, size 0x4, align 4
    float32 axe_damage; // offset 0x1B40, size 0x4, align 4
    float32 duration; // offset 0x1B44, size 0x4, align 4
    float32 min_throw_duration; // offset 0x1B48, size 0x4, align 4
    float32 max_throw_duration; // offset 0x1B4C, size 0x4, align 4
};
