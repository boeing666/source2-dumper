#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vTargetPos; // offset 0x1AA8, size 0xC, align 4
    Vector m_vDirection; // offset 0x1AB4, size 0xC, align 4
    int32 move_speed; // offset 0x1AC0, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1AC4, size 0x4, align 4
    bool m_bIsInPosition; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x7]; // offset 0x1AD1
};
