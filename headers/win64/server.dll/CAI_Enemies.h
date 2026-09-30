#pragma once

class CAI_Enemies  // sizeof 0x48, align 0x8 (server) {MGetKV3ClassDefaults}
{
public:
    CUtlOrderedMap< CHandle< CBaseEntity >, AI_EnemyInfo_t* > m_Map; // offset 0x0, size 0x28, align 8
    float32 m_flFreeKnowledgeDuration; // offset 0x28, size 0x4, align 4
    float32 m_flEnemyDiscardDuration; // offset 0x2C, size 0x4, align 4
    float32 m_flLastAggroDecayTime; // offset 0x30, size 0x4, align 4
    int32 m_nSerial; // offset 0x34, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentEnemy; // offset 0x38, size 0x4, align 4
    CHandle< CBaseEntity > m_hFreeHuntTarget; // offset 0x3C, size 0x4, align 4
    char _pad_0040[0x8]; // offset 0x40
};
