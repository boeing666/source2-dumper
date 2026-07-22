#pragma once

class CAI_EnemyServices : public CAI_Component /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CHandle< CBaseEntity > m_hEnemy; // offset 0x50, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastEnemy; // offset 0x54, size 0x4, align 4
    GameTime_t m_flTimeEnemyAcquired; // offset 0x58, size 0x4, align 255
    bool m_bHasEnemyAcquired; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
    GameTime_t m_flTimeLastHadEnemy; // offset 0x60, size 0x4, align 255
    bool m_bHasLastHadEnemy; // offset 0x64, size 0x1, align 1
    char _pad_0065[0x3]; // offset 0x65
    int32 m_nEnemiesSerialNumber; // offset 0x68, size 0x4, align 4
    CHandle< CBaseEntity > m_hEnemyOccluder; // offset 0x6C, size 0x4, align 4
    char _pad_0070[0x8]; // offset 0x70
};
