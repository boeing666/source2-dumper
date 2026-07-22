#pragma once

class CInfoMidBossSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int32 m_iCoverGroupID; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_iszSquadName; // offset 0x4A8, size 0x8, align 8
    char _pad_04B0[0x8]; // offset 0x4B0
};
