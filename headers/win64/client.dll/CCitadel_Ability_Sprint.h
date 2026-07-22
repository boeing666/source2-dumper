#pragma once

class CCitadel_Ability_Sprint : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x11F0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_nSprintParticle; // offset 0x11D8, size 0x4, align 255
    bool m_bSprinting; // offset 0x11DC, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNetworkUserGroup
    char _pad_11DD[0x3]; // offset 0x11DD
    GameTime_t m_flSprintStartTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bInCombat; // offset 0x11E4, size 0x1, align 1
    char _pad_11E5[0xB]; // offset 0x11E5
};
