#pragma once

class CDOTA_Modifier_Techies_StickyBomb_Chase : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 acceleration; // offset 0x1A58, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1A5C, size 0x4, align 4
    float32 speed; // offset 0x1A60, size 0x4, align 4
    float32 pre_chase_time; // offset 0x1A64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A68, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A6C, size 0xC, align 4
    CountdownTimer m_MoveTime; // offset 0x1A78, size 0x18, align 8
};
