#pragma once

class CDOTA_Ability_Kez_Echo_Slash : public CDOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x5F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x588]; // offset 0x0
    Vector m_vInitialDirection; // offset 0x588, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x594, size 0xC, align 4
    CTransformWS m_InitialTransform; // offset 0x5A0, size 0x20, align 16
    float32 katana_radius; // offset 0x5C0, size 0x4, align 4
    float32 katana_distance; // offset 0x5C4, size 0x4, align 4
    float32 travel_distance; // offset 0x5C8, size 0x4, align 4
    int32 katana_strikes; // offset 0x5CC, size 0x4, align 4
    float32 katana_echo_damage; // offset 0x5D0, size 0x4, align 4
    float32 strike_interval; // offset 0x5D4, size 0x4, align 4
    float32 effect_duration; // offset 0x5D8, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x5DC, size 0x4, align 4
    GameTime_t m_NextStrikeTime; // offset 0x5E0, size 0x4, align 255
    bool m_bFlutter; // offset 0x5E4, size 0x1, align 1
    char _pad_05E5[0x3]; // offset 0x5E5
    ParticleIndex_t m_nFXCast; // offset 0x5E8, size 0x4, align 255
    char _pad_05EC[0x4]; // offset 0x5EC
};
