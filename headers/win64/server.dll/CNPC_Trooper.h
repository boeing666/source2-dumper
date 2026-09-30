#pragma once

class CNPC_Trooper : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1780, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1720]; // offset 0x0
    int32 m_iLane; // offset 0x1720, size 0x4, align 4
    char _pad_1724[0x20]; // offset 0x1724
    CHandle< CInfoTrooperBossSpawn > m_hSpawnWaveController; // offset 0x1744, size 0x4, align 4
    CHandle< CInfoTrooperSpawn > m_hTrooperSpawnPoint; // offset 0x1748, size 0x4, align 4
    char _pad_174C[0x10]; // offset 0x174C
    CHandle< CBaseEntity > m_hTargetedEnemy; // offset 0x175C, size 0x4, align 4 | MNotSaved
    bool m_bUsingBossWeapon; // offset 0x1760, size 0x1, align 1 | MNotSaved
    char _pad_1761[0x1F]; // offset 0x1761
};
