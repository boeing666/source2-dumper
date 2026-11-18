#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA48]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0xA48, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0xA50, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xA68, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x3]; // offset 0xA71
    float32 m_flTargetAreaSearchRadius; // offset 0xA74, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xA78, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xA7C, size 0x4, align 4
};
