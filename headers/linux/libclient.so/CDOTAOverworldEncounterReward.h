#pragma once

class CDOTAOverworldEncounterReward  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    uint32 m_unRewardData; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_sEventAction; // offset 0x8, size 0x8, align 8
    KeyValues3 m_kvRewardExtraData; // offset 0x10, size 0x10, align 8
    CUtlString m_sRewardTitle; // offset 0x20, size 0x8, align 8
};
