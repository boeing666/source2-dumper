#pragma once

class CPointPrefab : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_targetMapName; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_forceWorldGroupID; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_associatedRelayTargetName; // offset 0x798, size 0x8, align 8
    bool m_fixupNames; // offset 0x7A0, size 0x1, align 1
    bool m_bLoadDynamic; // offset 0x7A1, size 0x1, align 1
    char _pad_07A2[0x2]; // offset 0x7A2
    CHandle< CPointPrefab > m_associatedRelayEntity; // offset 0x7A4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_ProceduralRelaySources; // offset 0x7A8, size 0x18, align 8
    char _pad_07C0[0x50]; // offset 0x7C0
};
