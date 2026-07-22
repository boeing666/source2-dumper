#pragma once

class CSurvivorsPowerUpSnapshot  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsPowerUpID_t m_unPowerUpID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< SurvivorsUpgradeID_t > m_vecUpgradeIDs; // offset 0x8, size 0x18, align 8
    bool m_bShardUpgraded; // offset 0x20, size 0x1, align 1
    bool m_bScepterUpgraded; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x6]; // offset 0x22
};
