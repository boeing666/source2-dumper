#pragma once

struct DotaAbilityRelationship_t  // sizeof 0x20, align 0xFF (client)
{
    CUtlVector< DOTAAbilityDefinition_t* > m_vecTalents; // offset 0x0, size 0x18, align 8
    bool m_bHasScepter; // offset 0x18, size 0x1, align 1
    bool m_bHasShard; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x6]; // offset 0x1A
};
