#pragma once

class CDOTAOverworldDefinition  // sizeof 0x618, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton}
{
public:
    CUtlString generic_data_type; // offset 0x0, size 0x8, align 8
    OverworldID_t m_unID; // offset 0x8, size 0x1, align 255 | MPropertyDescription
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_sKey; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    EEvent m_eAssociatedEvent; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    EOverworldProgressionType m_eProgressionType; // offset 0x1C, size 0x4, align 4
    uint8 m_unOverworldVersion; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
    CUtlString m_sTokenTraderEncounterName; // offset 0x28, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sNodeUnlockEventAction; // offset 0x30, size 0x8, align 8 | MPropertyDescription
    Vector2D m_vGridOffset; // offset 0x38, size 0x8, align 4
    uint32 m_unGridSize; // offset 0x40, size 0x4, align 4
    uint32 m_unNodeGridSize; // offset 0x44, size 0x4, align 4
    uint32 m_unMapWidth; // offset 0x48, size 0x4, align 4
    uint32 m_unMapHeight; // offset 0x4C, size 0x4, align 4
    CUtlVector< float32 > m_vecCameraDistances; // offset 0x50, size 0x18, align 8 | MPropertyDescription
    float32 m_flMinCameraDistance; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxCameraDistance; // offset 0x6C, size 0x4, align 4 | MPropertyDescription
    float32 m_flInnerCameraDistanceThreshold; // offset 0x70, size 0x4, align 4 | MPropertyDescription
    Vector2D m_vMinCameraBounds; // offset 0x74, size 0x8, align 4 | MPropertyDescription
    Vector2D m_vMaxCameraBounds; // offset 0x7C, size 0x8, align 4 | MPropertyDescription
    char _pad_0084[0x4]; // offset 0x84
    CUtlString m_sMapVisualsXmlPath; // offset 0x88, size 0x8, align 8
    CUtlVector< DOTAOverworldReleaseScheduledUnlock_t > m_vecReleaseSchedule; // offset 0x90, size 0x18, align 8 | MPropertyDescription
    CUtlVector< OverworldNodeID_t > m_vecStartNodeIds; // offset 0xA8, size 0x18, align 8 | MPropertyDescription
    OverworldNodeID_t m_unEndNodeID; // offset 0xC0, size 0x2, align 255 | MPropertyDescription
    char _pad_00C2[0x6]; // offset 0xC2
    CUtlString m_sVisualNovelName; // offset 0xC8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sTokenLocStringPrefix; // offset 0xD0, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sActNumberLocString; // offset 0xD8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sActTitleLocString; // offset 0xE0, size 0x8, align 8 | MPropertyDescription
    item_definition_index_t m_unPremiumItemDef; // offset 0xE8, size 0x4, align 255 | MPropertyDescription
    item_definition_index_t m_unFullCompletionItemDef; // offset 0xEC, size 0x4, align 255 | MPropertyDescription
    OverworldTokenID_t m_unScrapTokenID; // offset 0xF0, size 0x1, align 255 | MPropertyDescription
    char _pad_00F1[0x3]; // offset 0xF1
    uint32 m_unFortuneDuration; // offset 0xF4, size 0x4, align 4 | MPropertyDescription
    OverworldTokenID_t m_unPathUnlockerTokenID; // offset 0xF8, size 0x1, align 255 | MPropertyDescription
    char _pad_00F9[0x3]; // offset 0xF9
    int32 m_unFortuneCountForPermanentReward; // offset 0xFC, size 0x4, align 4 | MPropertyDescription
    int32 m_unTimesFortuneCanBeSeenBeforeRepeats; // offset 0x100, size 0x4, align 4 | MPropertyDescription
    char _pad_0104[0x4]; // offset 0x104
    CUtlVector< int32 > m_vecFortuneWeightForUnseenAmount; // offset 0x108, size 0x18, align 8 | MPropertyDescription
    int32 m_nMaxTokenCap; // offset 0x120, size 0x4, align 4 | MPropertyDescription
    char _pad_0124[0x4]; // offset 0x124
    CUtlVector< CDOTAEventActionTrigger > m_vecEventActionTriggers; // offset 0x128, size 0x18, align 8
    CUtlVector< CDOTAEventActionGrantAndClaimPairTrigger > m_vecEventActionGrantAndClaimPairTriggers; // offset 0x140, size 0x18, align 8
    CUtlVector< CDOTAOverworldPathColorRule > m_vecPathColorRules; // offset 0x158, size 0x18, align 8
    CUtlString m_strNarrationVisualNovel; // offset 0x170, size 0x8, align 8
    CUtlOrderedMap< CUtlString, CUtlString > m_mapNarrationDialogues; // offset 0x178, size 0x28, align 8
    char _pad_01A0[0x1D0]; // offset 0x1A0
    CDOTAOverworldTheme m_Theme; // offset 0x370, size 0x38, align 8
    CUtlVector< CDOTAOverworldToken* > m_vecTokenTypes; // offset 0x3A8, size 0x18, align 8
    char _pad_03C0[0x18]; // offset 0x3C0
    CUtlVector< CDOTAOverworldTarotCard* > m_vecTarotCards; // offset 0x3D8, size 0x18, align 8
    CUtlVector< CDOTAOverworldFortuneTellerReward* > m_vecFortuneTellerRewards; // offset 0x3F0, size 0x18, align 8
    CUtlVector< CDOTAOverworldFortuneForcedReveal* > m_vecFortuneForcedReveals; // offset 0x408, size 0x18, align 8
    CUtlVector< CDOTAOverworldFortuneTellerFixedReward* > m_vecFortuneTellerFixedReward; // offset 0x420, size 0x18, align 8
    CUtlVector< CDOTAOverworldFortuneTellerStoryNode* > m_vecFortuneTellerStoryNodes; // offset 0x438, size 0x18, align 8
    char _pad_0450[0x28]; // offset 0x450
    CUtlVector< CDOTAOverworldHeroReward* > m_vecHeroRewards; // offset 0x478, size 0x18, align 8
    CUtlVector< CDOTAOverworldNode* > m_vecNodes; // offset 0x490, size 0x18, align 8
    CUtlVector< CDOTAOverworldPath* > m_vecPaths; // offset 0x4A8, size 0x18, align 8
    CUtlVector< CDOTAOverworldRoom* > m_vecRooms; // offset 0x4C0, size 0x18, align 8
    CUtlVector< CDOTAOverworldEncounter* > m_vecEncounters; // offset 0x4D8, size 0x18, align 8
    CUtlVector< CDOTAOverworldHero* > m_vecHeroes; // offset 0x4F0, size 0x18, align 8
    CUtlVector< CDOTAOverworldCharacter* > m_vecCharacters; // offset 0x508, size 0x18, align 8
    CUtlVector< CDOTAOverworldClickable* > m_vecClickables; // offset 0x520, size 0x18, align 8
    char _pad_0538[0xC8]; // offset 0x538
    CUtlVector< CDOTAOverworldRoomGroup* > m_vecRoomGroups; // offset 0x600, size 0x18, align 8
};
