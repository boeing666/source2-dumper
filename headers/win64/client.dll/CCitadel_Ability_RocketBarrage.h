#pragma once

class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16A8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CCitadelAutoScaledTime m_flBarrageEndTime; // offset 0x11D8, size 0x18, align 255 | MNetworkEnable
    char _pad_11F0[0x480]; // offset 0x11F0
    float32 m_flCurrentTimeScale; // offset 0x1670, size 0x4, align 4
    Vector m_vecAimPos; // offset 0x1674, size 0xC, align 4
    Vector m_vecAimVel; // offset 0x1680, size 0xC, align 4
    GameTime_t m_flLastUpdateTime; // offset 0x168C, size 0x4, align 255
    char _pad_1690[0x18]; // offset 0x1690
};
