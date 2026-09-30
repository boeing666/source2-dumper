#pragma once

class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CCitadelAutoScaledTime m_flBarrageEndTime; // offset 0x14A0, size 0x18, align 255
    char _pad_14B8[0x630]; // offset 0x14B8
    float32 m_flCurrentTimeScale; // offset 0x1AE8, size 0x4, align 4
    VectorWS m_vecAimPos; // offset 0x1AEC, size 0xC, align 4
    Vector m_vecAimVel; // offset 0x1AF8, size 0xC, align 4
    GameTime_t m_flLastUpdateTime; // offset 0x1B04, size 0x4, align 255
    char _pad_1B08[0x18]; // offset 0x1B08
};
