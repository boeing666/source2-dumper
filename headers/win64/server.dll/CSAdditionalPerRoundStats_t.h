#pragma once

struct CSAdditionalPerRoundStats_t  // sizeof 0xF8, align 0xFF (server)
{
    int32 m_numChickensKilled; // offset 0x0, size 0x4, align 4
    int32 m_killsWhileBlind; // offset 0x4, size 0x4, align 4
    int32 m_bombCarrierkills; // offset 0x8, size 0x4, align 4
    float32 m_flBurnDamageInflicted; // offset 0xC, size 0x4, align 4
    float32 m_flBlastDamageInflicted; // offset 0x10, size 0x4, align 4
    int32 m_iDinks; // offset 0x14, size 0x4, align 4
    bool m_bFreshStartThisRound; // offset 0x18, size 0x1, align 1
    bool m_bBombPlantedAndAlive; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x2]; // offset 0x1A
    int32 m_nDefuseStarts; // offset 0x1C, size 0x4, align 4
    int32 m_nHostagePickUps; // offset 0x20, size 0x4, align 4
    int32 m_numTeammatesFlashed; // offset 0x24, size 0x4, align 4
    CUtlString m_strAnnotationsWorkshopId; // offset 0x28, size 0x8, align 8
    char _pad_0030[0xC8]; // offset 0x30
};
