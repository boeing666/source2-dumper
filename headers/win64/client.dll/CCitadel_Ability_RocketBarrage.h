#pragma once

class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CCitadelAutoScaledTime m_flBarrageEndTime; // offset 0x16E0, size 0x18, align 255
    char _pad_16F8[0x630]; // offset 0x16F8
    float32 m_flCurrentTimeScale; // offset 0x1D28, size 0x4, align 4
    VectorWS m_vecAimPos; // offset 0x1D2C, size 0xC, align 4
    Vector m_vecAimVel; // offset 0x1D38, size 0xC, align 4
    GameTime_t m_flLastUpdateTime; // offset 0x1D44, size 0x4, align 255
    char _pad_1D48[0x18]; // offset 0x1D48
};
