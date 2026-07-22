#pragma once

class CMonsterHunterWorldDefinition  // sizeof 0x310, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton}
{
public:
    CUtlVector< CMonsterHunterMaterialDefinition > m_vecMaterials; // offset 0x0, size 0x18, align 8
    CUtlVector< CMonsterHunterEconItemDefinition > m_vecEconItems; // offset 0x18, size 0x18, align 8
    CUtlVector< CMonsterHunterCraftableRewardDefinition > m_vecCraftableRewards; // offset 0x30, size 0x18, align 8
    CUtlVector< CMonsterHunterHeroDefinition > m_vecHeroes; // offset 0x48, size 0x18, align 8
    CUtlVector< CMonsterHunterTradeRecipeDefinition > m_vecTradeRecipes; // offset 0x60, size 0x18, align 8
    CUtlOrderedMap< CUtlString, CMonsterHunterHeroCodexDefinition > m_mapCodexEntriesLocalized; // offset 0x78, size 0x28, align 8
    char _pad_00A0[0x28]; // offset 0xA0
    CUtlString m_strTokenLocStringPrefix; // offset 0xC8, size 0x8, align 8
    CUtlVector< CMonsterHunterSmallRewardCategoryDefinition > m_vecSmallRewards; // offset 0xD0, size 0x18, align 8
    CUtlVector< CMonterHunterHunterRankRewardDefinition > m_vecHunterRankRewardLine; // offset 0xE8, size 0x18, align 8
    char _pad_0100[0x210]; // offset 0x100
};
