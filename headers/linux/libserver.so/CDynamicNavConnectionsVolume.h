#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0xCB8, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0xCC0, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xCD8, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xCE0, size 0x1, align 1
    char _pad_0CE1[0x3]; // offset 0xCE1
    float32 m_flTargetAreaSearchRadius; // offset 0xCE4, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xCE8, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xCEC, size 0x4, align 4
};
