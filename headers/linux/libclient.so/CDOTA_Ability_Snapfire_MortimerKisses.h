#pragma once

class CDOTA_Ability_Snapfire_MortimerKisses : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x824, size 0x4, align 4
    int32 damage_per_impact; // offset 0x828, size 0x4, align 4
    float32 impact_radius; // offset 0x82C, size 0x4, align 4
    float32 projectile_vision; // offset 0x830, size 0x4, align 4
    float32 min_range; // offset 0x834, size 0x4, align 4
};
