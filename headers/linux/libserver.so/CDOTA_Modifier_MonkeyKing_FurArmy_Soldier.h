#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vTargetPos; // offset 0x1A78, size 0xC, align 4
    Vector m_vDirection; // offset 0x1A84, size 0xC, align 4
    int32 move_speed; // offset 0x1A90, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1A94, size 0x4, align 4
    bool m_bIsInPosition; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x3]; // offset 0x1A99
    ParticleIndex_t m_nFXIndex; // offset 0x1A9C, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
