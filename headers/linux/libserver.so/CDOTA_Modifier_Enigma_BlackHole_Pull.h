#pragma once

class CDOTA_Modifier_Enigma_BlackHole_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 pull_speed; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    float32 damage; // offset 0x1A80, size 0x4, align 4
    float32 tick_rate; // offset 0x1A84, size 0x4, align 4
    float32 pull_rotate_speed; // offset 0x1A88, size 0x4, align 4
    float32 animation_rate; // offset 0x1A8C, size 0x4, align 4
    float32 scepter_pct_damage; // offset 0x1A90, size 0x4, align 4
    float32 m_flBlackHoleDuration; // offset 0x1A94, size 0x4, align 4
    float32 m_flBlackHoleCreationTime; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_flDamageTick; // offset 0x1A9C, size 0x4, align 255
};
