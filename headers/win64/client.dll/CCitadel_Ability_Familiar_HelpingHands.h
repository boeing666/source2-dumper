#pragma once

class CCitadel_Ability_Familiar_HelpingHands : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecHelpers; // offset 0x16D8, size 0x18, align 8
    GameTime_t m_tChoreUseCooldownEndTime; // offset 0x16F0, size 0x4, align 255
    GameTime_t m_tSoonestHelperCooldownEndTime; // offset 0x16F4, size 0x4, align 255
    char m_nAvailableHelperCount; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x4D7]; // offset 0x16F9
};
