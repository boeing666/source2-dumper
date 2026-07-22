#pragma once

class CNPC_Trooper : public CAI_CitadelNPC /*0x0*/  // sizeof 0x18D0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17C8]; // offset 0x0
    int32 m_iLane; // offset 0x17C8, size 0x4, align 4 | MNetworkEnable
    int32 m_iLaneSlot; // offset 0x17CC, size 0x4, align 4
    char _pad_17D0[0x30]; // offset 0x17D0
    CHandle< CInfoTrooperBossSpawn > m_hSpawnWaveController; // offset 0x1800, size 0x4, align 4
    CHandle< CInfoTrooperSpawn > m_hTrooperSpawnPoint; // offset 0x1804, size 0x4, align 4
    char _pad_1808[0x20]; // offset 0x1808
    CModifierHandleTyped< CCitadelModifier > m_hNearDeathModifier; // offset 0x1828, size 0x18, align 8
    char _pad_1840[0x8]; // offset 0x1840
    CHandle< CBaseEntity > m_hTargetedEnemy; // offset 0x1848, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flHealingChargeParticlePct; // offset 0x184C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNotSaved
    char _pad_1850[0x80]; // offset 0x1850
};
