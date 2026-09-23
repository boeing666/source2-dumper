#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E0]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0x9E0, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0x9E8, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xA00, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xA08, size 0x1, align 1
    char _pad_0A09[0x3]; // offset 0xA09
    float32 m_flTargetAreaSearchRadius; // offset 0xA0C, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xA10, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xA14, size 0x4, align 4
};
