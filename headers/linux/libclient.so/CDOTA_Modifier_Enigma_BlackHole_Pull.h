#pragma once

class CDOTA_Modifier_Enigma_BlackHole_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 pull_speed; // offset 0x1A58, size 0x4, align 4
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    float32 damage; // offset 0x1A60, size 0x4, align 4
    float32 tick_rate; // offset 0x1A64, size 0x4, align 4
    float32 pull_rotate_speed; // offset 0x1A68, size 0x4, align 4
    float32 animation_rate; // offset 0x1A6C, size 0x4, align 4
    float32 scepter_pct_damage; // offset 0x1A70, size 0x4, align 4
    float32 m_flBlackHoleDuration; // offset 0x1A74, size 0x4, align 4
    float32 m_flBlackHoleCreationTime; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_flDamageTick; // offset 0x1A7C, size 0x4, align 255
};
