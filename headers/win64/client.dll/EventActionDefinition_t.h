#pragma once

struct EventActionDefinition_t  // sizeof 0x90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    uint8_t bClaimableIfPrerequisitesSatisfied : 1; // offset 0x0
    uint8_t bClaimableUpToEventLevel : 1; // offset 0x0
    uint8_t bAlwaysClaimable : 1; // offset 0x0
    uint8_t bNeverClaimable : 1; // offset 0x0
    uint8_t bClaimableWithoutGrant : 1; // offset 0x0
    uint8_t bIsRemovable : 1; // offset 0x0
    uint8_t bClaimableOnExpiredEvents : 1; // offset 0x0
    char _pad_0001[0x7]; // offset 0x1
    uint32 unMinActionID; // offset 0x8, size 0x4, align 4
    uint32 unMaxActionID; // offset 0xC, size 0x4, align 4
    char _pad_0010[0x8]; // offset 0x10
    uint32 unMaxGrantsIfOwned; // offset 0x18, size 0x4, align 4
    uint32 unMaxGrantsIfUnowned; // offset 0x1C, size 0x4, align 4
    uint32 unAvailableAtEventLevel; // offset 0x20, size 0x4, align 4
    uint32 unAvailableAtEventLevelRepeatInterval; // offset 0x24, size 0x4, align 4
    uint32 unPointCost; // offset 0x28, size 0x4, align 4
    uint32 unPremiumPointCost; // offset 0x2C, size 0x4, align 4
    uint32 unImportant; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlString strFriendsLeaderboard; // offset 0x38, size 0x8, align 8
    CUtlVector< item_definition_index_t > m_vecAnyOfRequiredItemDefs; // offset 0x40, size 0x18, align 8
    CUtlVector< EventActionScoreDefinition_t > vecScoreRewards; // offset 0x58, size 0x18, align 8
    CUtlVector< EventActionPrerequisite_t > vecPrerequisiteActions; // offset 0x70, size 0x18, align 8
    char _pad_0088[0x8]; // offset 0x88
};
