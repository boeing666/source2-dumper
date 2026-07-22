#pragma once

class CDOTA_Modifier_Muerta_PierceTheVeil_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 modelscale; // offset 0x1A58, size 0x4, align 4
    int32 base_damage_percent; // offset 0x1A5C, size 0x4, align 4
    int32 attack_projectile_speed_bonus; // offset 0x1A60, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A64, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x1A68, size 0x4, align 4
    ParticleIndex_t m_nScreenFXIndex; // offset 0x1A6C, size 0x4, align 255
};
