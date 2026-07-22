#pragma once

class CCitadel_Ability_Familiar_HelpingHands : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecHelpers; // offset 0x11D8, size 0x18, align 8 | MNetworkEnable
    GameTime_t m_tChoreUseCooldownEndTime; // offset 0x11F0, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tSoonestHelperCooldownEndTime; // offset 0x11F4, size 0x4, align 255 | MNetworkEnable
    char m_nAvailableHelperCount; // offset 0x11F8, size 0x1, align 1 | MNetworkEnable
    char _pad_11F9[0x387]; // offset 0x11F9
};
