#pragma once

class CDOTA_Modifier_Techies_StickyBomb_Chase : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 acceleration; // offset 0x1A78, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1A7C, size 0x4, align 4
    float32 speed; // offset 0x1A80, size 0x4, align 4
    float32 pre_chase_time; // offset 0x1A84, size 0x4, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A8C, size 0xC, align 4
    CountdownTimer m_MoveTime; // offset 0x1A98, size 0x18, align 8
};
