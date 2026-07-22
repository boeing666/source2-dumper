#pragma once

class CDOTAFantasyDefinition  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< FantasyCraftSetupData_t > m_vecCraftingSetups; // offset 0x8, size 0x18, align 8
    CUtlVector< FantasyLeagueData_t > m_vecLeagues; // offset 0x20, size 0x18, align 8
};
