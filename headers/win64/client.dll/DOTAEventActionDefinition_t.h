#pragma once

struct DOTAEventActionDefinition_t : public EventActionDefinition_t /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    uint8_t bAddToWebRequest : 1; // offset 0x0
    uint8_t bRequireInGameWinToIncrement : 1; // offset 0x0
    uint8_t bDoubleIncrementInNormalGames : 1; // offset 0x0
    uint8_t bRequiresPlusSubscription : 1; // offset 0x0
    uint8_t bAllowProgressInEventGame : 1; // offset 0x0
    uint8_t bIsLobbyNetworked : 1; // offset 0x0
    uint8_t bRequireClaimForFutureVNDialog : 1; // offset 0x0
    char _pad_0001[0x8F]; // offset 0x1
    CUtlString strSeasonActionName; // offset 0x90, size 0x8, align 8
    CUtlString strLinkedChallenge; // offset 0x98, size 0x8, align 8
    uint32 unPreviousAchievementActionID; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0x4]; // offset 0xA4
    uint32 unTeamID; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    CUtlString strVisualNovelDialogue; // offset 0xB0, size 0x8, align 8
};
