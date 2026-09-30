#pragma once

class CPointPrefab : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_targetMapName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_forceWorldGroupID; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_associatedRelayTargetName; // offset 0x4C0, size 0x8, align 8
    bool m_fixupNames; // offset 0x4C8, size 0x1, align 1
    bool m_bLoadDynamic; // offset 0x4C9, size 0x1, align 1
    char _pad_04CA[0x2]; // offset 0x4CA
    CHandle< CPointPrefab > m_associatedRelayEntity; // offset 0x4CC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_ProceduralRelaySources; // offset 0x4D0, size 0x18, align 8
    char _pad_04E8[0x50]; // offset 0x4E8
};
