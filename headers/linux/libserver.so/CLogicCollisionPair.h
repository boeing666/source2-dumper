#pragma once

class CLogicCollisionPair : public CLogicalEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_nameAttach1; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x780, size 0x8, align 8
    bool m_includeHierarchy; // offset 0x788, size 0x1, align 1
    bool m_supportMultipleEntitiesWithSameName; // offset 0x789, size 0x1, align 1
    bool m_disabled; // offset 0x78A, size 0x1, align 1
    bool m_succeeded; // offset 0x78B, size 0x1, align 1
    bool m_allowMissing; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
};
