#pragma once

class CInfoTeamSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bIntroSpawn; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    int32 m_iLaneNum; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_strGroupTag; // offset 0x4B8, size 0x8, align 8
    CHandle< CBaseEntity > m_hAssignedPlayer; // offset 0x4C0, size 0x4, align 4 | MNotSaved
    char _pad_04C4[0x4]; // offset 0x4C4
};
