#pragma once

class CCitadel_Ability_RocketBarrage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1440, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CCitadelAutoScaledTime m_flBarrageEndTime; // offset 0xF70, size 0x18, align 255 | MNetworkEnable
    char _pad_0F88[0x480]; // offset 0xF88
    float32 m_flCurrentTimeScale; // offset 0x1408, size 0x4, align 4
    Vector m_vecAimPos; // offset 0x140C, size 0xC, align 4
    Vector m_vecAimVel; // offset 0x1418, size 0xC, align 4
    GameTime_t m_flLastUpdateTime; // offset 0x1424, size 0x4, align 255
    char _pad_1428[0x18]; // offset 0x1428
};
