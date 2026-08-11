#pragma once

class CDOTA_Ability_Snapfire_MortimerKisses : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x580, size 0x4, align 4
    int32 damage_per_impact; // offset 0x584, size 0x4, align 4
    float32 impact_radius; // offset 0x588, size 0x4, align 4
    float32 projectile_vision; // offset 0x58C, size 0x4, align 4
    float32 min_range; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x14]; // offset 0x594
};
