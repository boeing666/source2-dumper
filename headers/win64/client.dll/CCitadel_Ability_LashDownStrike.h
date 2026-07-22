#pragma once

class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1808, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    GameTime_t m_ImpactTime; // offset 0x1358, size 0x4, align 255
    Vector m_vDamagePos; // offset 0x135C, size 0xC, align 4
    char _pad_1368[0x4]; // offset 0x1368
    ParticleIndex_t m_PreviewEffect; // offset 0x136C, size 0x4, align 255
    char _pad_1370[0x480]; // offset 0x1370
    Vector m_vStrikeVel; // offset 0x17F0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flInitialYaw; // offset 0x17FC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flStartHeight; // offset 0x1800, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1804[0x4]; // offset 0x1804
};
