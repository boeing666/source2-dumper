#pragma once

class CDynamicNavConnectionsVolume : public CTriggerMultiple /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    CUtlSymbolLarge m_iszConnectionTarget; // offset 0xD28, size 0x8, align 8
    CUtlVector< DynamicVolumeDef_t > m_vecConnections; // offset 0xD30, size 0x18, align 8
    CGlobalSymbol m_sTransitionType; // offset 0xD48, size 0x8, align 8
    bool m_bConnectionsEnabled; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x3]; // offset 0xD51
    float32 m_flTargetAreaSearchRadius; // offset 0xD54, size 0x4, align 4
    float32 m_flUpdateDistance; // offset 0xD58, size 0x4, align 4
    float32 m_flMaxConnectionDistance; // offset 0xD5C, size 0x4, align 4
};
