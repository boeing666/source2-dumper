#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmy_Soldier : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vTargetPos; // offset 0x1AF8, size 0xC, align 4
    Vector m_vDirection; // offset 0x1B04, size 0xC, align 4
    int32 move_speed; // offset 0x1B10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1B14, size 0x4, align 4
    bool m_bIsInPosition; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
    bool m_bAutoSpawn; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
};
