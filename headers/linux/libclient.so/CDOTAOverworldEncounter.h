#pragma once

class CDOTAOverworldEncounter  // sizeof 0x80, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_sName; // offset 0x8, size 0x8, align 8
    CUtlString m_sTemplate; // offset 0x10, size 0x8, align 8
    CUtlString m_sLocName; // offset 0x18, size 0x8, align 8
    CUtlString m_sLocDescription; // offset 0x20, size 0x8, align 8
    CPanoramaImageName m_sImage; // offset 0x28, size 0x10, align 8
    EOverworldEncounterRewardStyle m_eRewardStyle; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlVector< CDOTAOverworldEncounterReward > m_vecRewards; // offset 0x40, size 0x18, align 8
    CUtlString m_sDefaultDialogue; // offset 0x58, size 0x8, align 8
    KeyValues3 m_kvCustomData; // offset 0x60, size 0x10, align 8
    bool m_bRequiresNodeToBeUnlockedToClaimRewards; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x3]; // offset 0x71
    int32 m_nLeaderboardCount; // offset 0x74, size 0x4, align 4
    char _pad_0078[0x8]; // offset 0x78
};
