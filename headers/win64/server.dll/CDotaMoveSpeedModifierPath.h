#pragma once

class CDotaMoveSpeedModifierPath : public CBaseEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flPathLength; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
    CUtlVector< DotaModifierPathNode_t > m_vecNodes; // offset 0x4A0, size 0x18, align 8
    char _pad_04B8[0x18]; // offset 0x4B8
    CHandle< CBaseEntity > m_hTrigger; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
};
