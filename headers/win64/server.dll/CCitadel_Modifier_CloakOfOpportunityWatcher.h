#pragma once

class CCitadel_Modifier_CloakOfOpportunityWatcher : public CCitadel_Modifier_Intrinsic_Base /*0x0*/  // sizeof 0x2B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2A8]; // offset 0x0
    CUtlStringToken m_nAbilityBlocking; // offset 0x2A8, size 0x4, align 4
    GameTime_t m_nAbilityBlockTime; // offset 0x2AC, size 0x4, align 255
    CHandle< CBaseEntity > m_hModifierCaster; // offset 0x2B0, size 0x4, align 4
    char _pad_02B4[0x4]; // offset 0x2B4
};
