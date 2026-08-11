#pragma once

class CDOTA_Ability_Snapfire_MortimerKisses : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x85C, size 0x4, align 4
    int32 damage_per_impact; // offset 0x860, size 0x4, align 4
    float32 impact_radius; // offset 0x864, size 0x4, align 4
    float32 projectile_vision; // offset 0x868, size 0x4, align 4
    float32 min_range; // offset 0x86C, size 0x4, align 4
    char _pad_0870[0x18]; // offset 0x870
};
