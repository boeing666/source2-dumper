#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vTargetPos; // offset 0x1A58, size 0xC, align 4
    Vector m_vDirection; // offset 0x1A64, size 0xC, align 4
    int32 move_speed; // offset 0x1A70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1A74, size 0x4, align 4
    bool m_bIsInPosition; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
