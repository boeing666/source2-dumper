#pragma once

class CDOTA_Modifier_Invoker_GhostWalk_Self : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 self_slow; // offset 0x1B08, size 0x4, align 4
    int32 apply_ice_wall_debuff; // offset 0x1B0C, size 0x4, align 4
    float32 area_of_effect; // offset 0x1B10, size 0x4, align 4
    float32 aura_fade_time; // offset 0x1B14, size 0x4, align 4
    float32 health_regen; // offset 0x1B18, size 0x4, align 4
    float32 mana_regen; // offset 0x1B1C, size 0x4, align 4
    float32 disable_time; // offset 0x1B20, size 0x4, align 4
    GameTime_t m_timeLastDamage; // offset 0x1B24, size 0x4, align 255
};
