#pragma once

class CDOTA_Ability_SandKing_BurrowStrike : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 burrow_width; // offset 0x580, size 0x4, align 4
    int32 burrow_speed; // offset 0x584, size 0x4, align 4
    float32 burrow_anim_time; // offset 0x588, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x58C, size 0x1, align 1
    char _pad_058D[0x3]; // offset 0x58D
    VectorWS m_vEndpoint; // offset 0x590, size 0xC, align 4
    VectorWS m_vLastThinkerLocation; // offset 0x59C, size 0xC, align 4
    float32 spine_radius; // offset 0x5A8, size 0x4, align 4
    float32 spine_duration; // offset 0x5AC, size 0x4, align 4
    bool bHasStartedSpines; // offset 0x5B0, size 0x1, align 1
    char _pad_05B1[0x7]; // offset 0x5B1
};
