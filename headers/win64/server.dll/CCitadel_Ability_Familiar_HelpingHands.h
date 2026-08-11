#pragma once

class CCitadel_Ability_Familiar_HelpingHands : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecHelpers; // offset 0xF78, size 0x18, align 8 | MNetworkEnable
    GameTime_t m_tChoreUseCooldownEndTime; // offset 0xF90, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tSoonestHelperCooldownEndTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable
    char m_nAvailableHelperCount; // offset 0xF98, size 0x1, align 1 | MNetworkEnable
    char _pad_0F99[0x387]; // offset 0xF99
};
