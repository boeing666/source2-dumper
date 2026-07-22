#pragma once

class CDOTA_Modifier_Invoker_GhostWalk_Self : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A68]; // offset 0x0
    int32 self_slow; // offset 0x1A68, size 0x4, align 4
    int32 apply_ice_wall_debuff; // offset 0x1A6C, size 0x4, align 4
    float32 area_of_effect; // offset 0x1A70, size 0x4, align 4
    float32 aura_fade_time; // offset 0x1A74, size 0x4, align 4
    float32 health_regen; // offset 0x1A78, size 0x4, align 4
    float32 mana_regen; // offset 0x1A7C, size 0x4, align 4
    float32 disable_time; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_timeLastDamage; // offset 0x1A84, size 0x4, align 255
};
