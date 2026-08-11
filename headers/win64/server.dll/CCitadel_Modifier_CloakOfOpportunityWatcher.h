#pragma once

class CCitadel_Modifier_CloakOfOpportunityWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x1E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CUtlStringToken m_nAbilityBlocking; // offset 0x1D0, size 0x4, align 4
    GameTime_t m_nAbilityBlockTime; // offset 0x1D4, size 0x4, align 255
    CHandle< CBaseEntity > m_hModifierCaster; // offset 0x1D8, size 0x4, align 4
    char _pad_01DC[0x4]; // offset 0x1DC
};
