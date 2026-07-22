#pragma once

class CBreakableStageHelper  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nCurrentStage; // offset 0x8, size 0x4, align 4
    int32 m_nStageCount; // offset 0xC, size 0x4, align 4 | MNotSaved
    char _pad_0010[0x8]; // offset 0x10
};
