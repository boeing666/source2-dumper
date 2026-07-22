#pragma once

class CDOTA_Ability_Juggernaut_Trinity : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x868, size 0xC, align 4
    Vector m_vDirection; // offset 0x874, size 0xC, align 4
    int32 m_nCurrentJump; // offset 0x880, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x884, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHitList; // offset 0x888, size 0x18, align 8
    int32 max_jumps; // offset 0x8A0, size 0x4, align 4
    float32 jump_speed; // offset 0x8A4, size 0x4, align 4
    int32 jump_attack_radius; // offset 0x8A8, size 0x4, align 4
    int32 attack_count; // offset 0x8AC, size 0x4, align 4
};
