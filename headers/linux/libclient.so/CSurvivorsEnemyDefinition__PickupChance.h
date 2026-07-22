#pragma once

class CSurvivorsEnemyDefinition::PickupChance  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sPickupName; // offset 0x0, size 0x8, align 8
    float32 m_flChance; // offset 0x8, size 0x4, align 4
    int32 m_nExperienceReward; // offset 0xC, size 0x4, align 4
    char _pad_0010[0x8]; // offset 0x10
};
