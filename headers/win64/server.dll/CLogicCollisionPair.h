#pragma once

class CLogicCollisionPair : public CLogicalEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_nameAttach1; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_nameAttach2; // offset 0x4B0, size 0x8, align 8
    bool m_includeHierarchy; // offset 0x4B8, size 0x1, align 1
    bool m_supportMultipleEntitiesWithSameName; // offset 0x4B9, size 0x1, align 1
    bool m_disabled; // offset 0x4BA, size 0x1, align 1
    bool m_succeeded; // offset 0x4BB, size 0x1, align 1
    bool m_allowMissing; // offset 0x4BC, size 0x1, align 1
    char _pad_04BD[0x3]; // offset 0x4BD
};
