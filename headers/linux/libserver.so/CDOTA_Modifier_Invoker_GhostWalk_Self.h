#pragma once

class CDOTA_Modifier_Invoker_GhostWalk_Self : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AB4]; // offset 0x0
    int32 self_slow; // offset 0x1AB4, size 0x4, align 4
    int32 apply_ice_wall_debuff; // offset 0x1AB8, size 0x4, align 4
    float32 area_of_effect; // offset 0x1ABC, size 0x4, align 4
    float32 aura_fade_time; // offset 0x1AC0, size 0x4, align 4
    float32 health_regen; // offset 0x1AC4, size 0x4, align 4
    float32 mana_regen; // offset 0x1AC8, size 0x4, align 4
    float32 disable_time; // offset 0x1ACC, size 0x4, align 4
    GameTime_t m_timeLastDamage; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
