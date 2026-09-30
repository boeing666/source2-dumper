#pragma once

class CInfoTrooperBossSpawn : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    CUtlSymbolLarge m_strBossEntityName; // offset 0x4D0, size 0x8, align 8
    int32 m_iLane; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x8]; // offset 0x4DC
    bool m_bReinforcementsOnly; // offset 0x4E4, size 0x1, align 1
    bool m_bTrooperTestSpawner; // offset 0x4E5, size 0x1, align 1
    char _pad_04E6[0x12]; // offset 0x4E6
    CEntityIOOutput m_eventOnTrooperKilled; // offset 0x4F8, size 0x18, align 255
    char _pad_0510[0x50]; // offset 0x510
};
