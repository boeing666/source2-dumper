#pragma once

class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 heal; // offset 0x1AA8, size 0x4, align 4
    float32 mana_per_second; // offset 0x1AAC, size 0x4, align 4
    float32 heal_interval; // offset 0x1AB0, size 0x4, align 4
    int32 does_heal_all_allies; // offset 0x1AB4, size 0x4, align 4
    int32 does_damage; // offset 0x1AB8, size 0x4, align 4
    int32 self_only_heal_percentage; // offset 0x1ABC, size 0x4, align 4
    float32 m_flTotalHealing; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
