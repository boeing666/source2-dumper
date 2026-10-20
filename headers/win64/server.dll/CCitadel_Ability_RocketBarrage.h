#pragma once

class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CCitadelAutoScaledTime m_flBarrageEndTime; // offset 0x14A8, size 0x18, align 255
    char _pad_14C0[0x630]; // offset 0x14C0
    float32 m_flCurrentTimeScale; // offset 0x1AF0, size 0x4, align 4
    VectorWS m_vecAimPos; // offset 0x1AF4, size 0xC, align 4
    Vector m_vecAimVel; // offset 0x1B00, size 0xC, align 4
    GameTime_t m_flLastUpdateTime; // offset 0x1B0C, size 0x4, align 255
    char _pad_1B10[0x18]; // offset 0x1B10
};
