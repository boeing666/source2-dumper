#pragma once

class CMatch3Level  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sLevelName; // offset 0x0, size 0x8, align 8
    CUtlString m_sOpponentName; // offset 0x8, size 0x8, align 8
    int32 m_nCompletionScore; // offset 0x10, size 0x4, align 4
    EMatch3LevelFlags m_eLevelFlags; // offset 0x14, size 0x4, align 4
};
