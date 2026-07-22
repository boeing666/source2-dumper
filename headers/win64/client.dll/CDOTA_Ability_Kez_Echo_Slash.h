#pragma once

class CDOTA_Ability_Kez_Echo_Slash : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x720, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    Vector m_vInitialDirection; // offset 0x6B0, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x6BC, size 0xC, align 4
    char _pad_06C8[0x8]; // offset 0x6C8
    CTransformWS m_InitialTransform; // offset 0x6D0, size 0x20, align 16
    float32 katana_radius; // offset 0x6F0, size 0x4, align 4
    float32 katana_distance; // offset 0x6F4, size 0x4, align 4
    float32 travel_distance; // offset 0x6F8, size 0x4, align 4
    int32 katana_strikes; // offset 0x6FC, size 0x4, align 4
    float32 katana_echo_damage; // offset 0x700, size 0x4, align 4
    float32 strike_interval; // offset 0x704, size 0x4, align 4
    float32 effect_duration; // offset 0x708, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x70C, size 0x4, align 4
    GameTime_t m_NextStrikeTime; // offset 0x710, size 0x4, align 255
    bool m_bFlutter; // offset 0x714, size 0x1, align 1
    char _pad_0715[0x3]; // offset 0x715
    ParticleIndex_t m_nFXCast; // offset 0x718, size 0x4, align 255
    char _pad_071C[0x4]; // offset 0x71C
};
