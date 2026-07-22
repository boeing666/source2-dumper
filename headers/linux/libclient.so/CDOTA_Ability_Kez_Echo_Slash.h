#pragma once

class CDOTA_Ability_Kez_Echo_Slash : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x890, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    Vector m_vInitialDirection; // offset 0x828, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x834, size 0xC, align 4
    CTransformWS m_InitialTransform; // offset 0x840, size 0x20, align 16
    float32 katana_radius; // offset 0x860, size 0x4, align 4
    float32 katana_distance; // offset 0x864, size 0x4, align 4
    float32 travel_distance; // offset 0x868, size 0x4, align 4
    int32 katana_strikes; // offset 0x86C, size 0x4, align 4
    float32 katana_echo_damage; // offset 0x870, size 0x4, align 4
    float32 strike_interval; // offset 0x874, size 0x4, align 4
    float32 effect_duration; // offset 0x878, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x87C, size 0x4, align 4
    GameTime_t m_NextStrikeTime; // offset 0x880, size 0x4, align 255
    bool m_bFlutter; // offset 0x884, size 0x1, align 1
    char _pad_0885[0x3]; // offset 0x885
    ParticleIndex_t m_nFXCast; // offset 0x888, size 0x4, align 255
    char _pad_088C[0x4]; // offset 0x88C
};
