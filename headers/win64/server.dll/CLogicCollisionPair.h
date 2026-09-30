#pragma once

class CLogicCollisionPair : public CLogicalEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_nameAttach1; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x4B8, size 0x8, align 8
    bool m_includeHierarchy; // offset 0x4C0, size 0x1, align 1
    bool m_supportMultipleEntitiesWithSameName; // offset 0x4C1, size 0x1, align 1
    bool m_disabled; // offset 0x4C2, size 0x1, align 1
    bool m_succeeded; // offset 0x4C3, size 0x1, align 1
    bool m_allowMissing; // offset 0x4C4, size 0x1, align 1
    char _pad_04C5[0x3]; // offset 0x4C5
};
