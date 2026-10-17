#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xCF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0xCC0, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0xCC8, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xCE0, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xCE8, size 0x1, align 1
    char _pad_0CE9[0x3]; // offset 0xCE9
    float32 m_flTargetAreaSearchRadius; // offset 0xCEC, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xCF0, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xCF4, size 0x4, align 4
};
