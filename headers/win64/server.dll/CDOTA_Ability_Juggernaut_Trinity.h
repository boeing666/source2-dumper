#pragma once

class CDOTA_Ability_Juggernaut_Trinity : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x58C, size 0xC, align 4
    Vector m_vDirection; // offset 0x598, size 0xC, align 4
    int32 m_nCurrentJump; // offset 0x5A4, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
    CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHitList; // offset 0x5B0, size 0x18, align 8
    int32 max_jumps; // offset 0x5C8, size 0x4, align 4
    float32 jump_speed; // offset 0x5CC, size 0x4, align 4
    int32 jump_attack_radius; // offset 0x5D0, size 0x4, align 4
    int32 attack_count; // offset 0x5D4, size 0x4, align 4
};
