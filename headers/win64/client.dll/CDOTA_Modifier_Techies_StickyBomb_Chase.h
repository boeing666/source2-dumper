#pragma once

class CDOTA_Modifier_Techies_StickyBomb_Chase : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 acceleration; // offset 0x1AF8, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1AFC, size 0x4, align 4
    float32 speed; // offset 0x1B00, size 0x4, align 4
    float32 pre_chase_time; // offset 0x1B04, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B0C, size 0xC, align 4
    CountdownTimer m_MoveTime; // offset 0x1B18, size 0x18, align 8
};
