#pragma once

class CDOTA_Modifier_Huskar_Berserkers_Blood : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 maximum_health_regen; // offset 0x1AA8, size 0x4, align 4
    int32 maximum_attack_speed; // offset 0x1AAC, size 0x4, align 4
    int32 maximum_magic_resist; // offset 0x1AB0, size 0x4, align 4
    int32 hp_threshold_max; // offset 0x1AB4, size 0x4, align 4
    bool m_bIsActive; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    int32 aura_effectiveness; // offset 0x1ABC, size 0x4, align 4
    ParticleIndex_t m_nFxHuskIndex; // offset 0x1AC0, size 0x4, align 255
    ParticleIndex_t m_nFxIndexA; // offset 0x1AC4, size 0x4, align 255
};
