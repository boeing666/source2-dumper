#pragma once

class CCitadel_Ability_Familiar_HelpingHands : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecHelpers; // offset 0x14A8, size 0x18, align 8
    GameTime_t m_tChoreUseCooldownEndTime; // offset 0x14C0, size 0x4, align 255
    GameTime_t m_tSoonestHelperCooldownEndTime; // offset 0x14C4, size 0x4, align 255
    char m_nAvailableHelperCount; // offset 0x14C8, size 0x1, align 1
    char _pad_14C9[0x4D7]; // offset 0x14C9
};
