#pragma once

class CSceneListManager : public CLogicalEntity /*0x0*/  // sizeof 0x578, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlVector< CHandle< CSceneListManager > > m_hListManagers; // offset 0x4A0, size 0x18, align 8
    CUtlSymbolLarge[16] m_iszScenes; // offset 0x4B8, size 0x80, align 8
    CHandle< CBaseEntity >[16] m_hScenes; // offset 0x538, size 0x40, align 4
};
