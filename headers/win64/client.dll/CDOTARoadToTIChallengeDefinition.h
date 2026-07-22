#pragma once

class CDOTARoadToTIChallengeDefinition  // sizeof 0x98, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EEvent m_eEvent; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    uint32 m_unTotalQuestPeriods; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    uint32 m_unHeroesPerQuest; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< uint32 > m_vecQuestPattern; // offset 0x10, size 0x18, align 8 | MPropertyDescription
    item_definition_index_t m_unCullingBladeItemDef; // offset 0x28, size 0x4, align 255 | MPropertyDescription
    item_definition_index_t m_unRerollItemDef; // offset 0x2C, size 0x4, align 255 | MPropertyDescription
    CUtlVector< RoadToTIQuestDefinition_t > m_vecQuests; // offset 0x30, size 0x18, align 8 | MPropertyDescription
    char _pad_0048[0x50]; // offset 0x48
};
