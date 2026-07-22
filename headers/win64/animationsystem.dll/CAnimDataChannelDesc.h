#pragma once

class CAnimDataChannelDesc  // sizeof 0x90, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_szChannelClass; // offset 0x0, size 0x10, align 8
    CBufferString m_szVariableName; // offset 0x10, size 0x10, align 8
    int32 m_nFlags; // offset 0x20, size 0x4, align 4
    int32 m_nType; // offset 0x24, size 0x4, align 4
    CBufferString m_szGrouping; // offset 0x28, size 0x10, align 8
    CBufferString m_szDescription; // offset 0x38, size 0x10, align 8
    CUtlVector< CBufferString > m_szElementNameArray; // offset 0x48, size 0x18, align 8
    CUtlVector< int32 > m_nElementIndexArray; // offset 0x60, size 0x18, align 8
    CUtlVector< uint32 > m_nElementMaskArray; // offset 0x78, size 0x18, align 8
};
