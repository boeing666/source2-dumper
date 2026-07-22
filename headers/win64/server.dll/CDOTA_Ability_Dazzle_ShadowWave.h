#pragma once

class CDOTA_Ability_Dazzle_ShadowWave : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x580, size 0x18, align 8
    float32 bounce_radius; // offset 0x598, size 0x4, align 4
    float32 damage_radius; // offset 0x59C, size 0x4, align 4
    int32 damage; // offset 0x5A0, size 0x4, align 4
    int32 max_targets; // offset 0x5A4, size 0x4, align 4
    float32 scepter_heal_pct; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
};
