#pragma once

class CDOTA_Modifier_Batrider_Firefly : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bActive; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 m_ifirefly_Active; // offset 0x1A60, size 0x4, align 4
    float32 tree_radius; // offset 0x1A64, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A68, size 0x4, align 4
    float32 movement_speed; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_slow_resistance; // offset 0x1A70, size 0x4, align 4
    float32 tick_interval; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A7C, size 0x4, align 255
    GameTime_t m_fNextDamageTick; // offset 0x1A80, size 0x4, align 255
    VectorWS m_vLastFirePoolLoc; // offset 0x1A84, size 0xC, align 4
    int32 bonus_vision; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x1C]; // offset 0x1A94
};
