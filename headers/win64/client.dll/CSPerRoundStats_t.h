#pragma once

struct CSPerRoundStats_t  // sizeof 0x68, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_iKills; // offset 0x30, size 0x4, align 4
    int32 m_iDeaths; // offset 0x34, size 0x4, align 4
    int32 m_iAssists; // offset 0x38, size 0x4, align 4
    int32 m_iDamage; // offset 0x3C, size 0x4, align 4
    int32 m_iEquipmentValue; // offset 0x40, size 0x4, align 4
    int32 m_iMoneySaved; // offset 0x44, size 0x4, align 4
    int32 m_iKillReward; // offset 0x48, size 0x4, align 4
    int32 m_iLiveTime; // offset 0x4C, size 0x4, align 4
    int32 m_iHeadShotKills; // offset 0x50, size 0x4, align 4
    int32 m_iObjective; // offset 0x54, size 0x4, align 4
    int32 m_iCashEarned; // offset 0x58, size 0x4, align 4
    int32 m_iUtilityDamage; // offset 0x5C, size 0x4, align 4
    int32 m_iEnemiesFlashed; // offset 0x60, size 0x4, align 4
    char _pad_0064[0x4]; // offset 0x64
};
