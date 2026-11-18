#pragma once

class CDOTA_Modifier_Batrider_Firefly : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bActive; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 m_ifirefly_Active; // offset 0x1B00, size 0x4, align 4
    float32 tree_radius; // offset 0x1B04, size 0x4, align 4
    float32 damage_per_second; // offset 0x1B08, size 0x4, align 4
    float32 movement_speed; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_slow_resistance; // offset 0x1B10, size 0x4, align 4
    float32 tick_interval; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B18, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B1C, size 0x4, align 255
    GameTime_t m_fNextDamageTick; // offset 0x1B20, size 0x4, align 255
    VectorWS m_vLastFirePoolLoc; // offset 0x1B24, size 0xC, align 4
    int32 bonus_vision; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x1C]; // offset 0x1B34
};
