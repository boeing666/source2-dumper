#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xC18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0xBE0, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0xBE8, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xC00, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xC08, size 0x1, align 1
    char _pad_0C09[0x3]; // offset 0xC09
    float32 m_flTargetAreaSearchRadius; // offset 0xC0C, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xC10, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xC14, size 0x4, align 4
};
