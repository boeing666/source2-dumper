#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0x908, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0x910, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0x928, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0x930, size 0x1, align 1
    char _pad_0931[0x3]; // offset 0x931
    float32 m_flTargetAreaSearchRadius; // offset 0x934, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0x938, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0x93C, size 0x4, align 4
};
