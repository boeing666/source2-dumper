#pragma once

class CDOTASlarkJailbreakGameDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    int32 m_nPointsPerBlock; // offset 0x0, size 0x4, align 4
    int32 m_nPointsPerBonusBlock; // offset 0x4, size 0x4, align 4
    int32 m_nPointsPerCompletedLevel; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CDOTASlarkJailbreakStageDefinition > m_vecStages; // offset 0x10, size 0x18, align 8
};
