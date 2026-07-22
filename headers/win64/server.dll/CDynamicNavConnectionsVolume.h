#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0x8F8, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0x900, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0x918, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0x920, size 0x1, align 1
    char _pad_0921[0x3]; // offset 0x921
    float32 m_flTargetAreaSearchRadius; // offset 0x924, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0x928, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0x92C, size 0x4, align 4
};
