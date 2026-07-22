#pragma once

class CLogicCollisionPair : public CLogicalEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge m_nameAttach1; // offset 0x498, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x4A0, size 0x8, align 8
    bool m_includeHierarchy; // offset 0x4A8, size 0x1, align 1
    bool m_supportMultipleEntitiesWithSameName; // offset 0x4A9, size 0x1, align 1
    bool m_disabled; // offset 0x4AA, size 0x1, align 1
    bool m_succeeded; // offset 0x4AB, size 0x1, align 1
    bool m_allowMissing; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
};
