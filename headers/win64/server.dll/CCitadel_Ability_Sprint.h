#pragma once

class CCitadel_Ability_Sprint : public CCitadelBaseAbility /*0x0*/  // sizeof 0xF88, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nSprintParticle; // offset 0xF70, size 0x4, align 255
    bool m_bSprinting; // offset 0xF74, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNetworkUserGroup
    char _pad_0F75[0x3]; // offset 0xF75
    GameTime_t m_flSprintStartTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bInCombat; // offset 0xF7C, size 0x1, align 1
    char _pad_0F7D[0xB]; // offset 0xF7D
};
