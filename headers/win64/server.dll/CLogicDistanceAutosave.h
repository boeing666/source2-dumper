#pragma once

class CLogicDistanceAutosave : public CLogicalEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszTargetEntity; // offset 0x4B0, size 0x8, align 8
    float32 m_flDistanceToPlayer; // offset 0x4B8, size 0x4, align 4
    bool m_bForceNewLevelUnit; // offset 0x4BC, size 0x1, align 1
    bool m_bCheckCough; // offset 0x4BD, size 0x1, align 1
    bool m_bThinkDangerous; // offset 0x4BE, size 0x1, align 1 | MNotSaved
    char _pad_04BF[0x1]; // offset 0x4BF
    float32 m_flDangerousTime; // offset 0x4C0, size 0x4, align 4 | MNotSaved
    char _pad_04C4[0x4]; // offset 0x4C4
};
