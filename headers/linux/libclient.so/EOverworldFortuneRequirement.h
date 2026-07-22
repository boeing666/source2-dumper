#pragma once

enum EOverworldFortuneRequirement : uint32_t  // sizeof 0x4
{
    k_eOverworldFortuneRequirement_Invalid = 0,
    k_eOverworldFortuneRequirement_WinGame = 1,
    k_eOverworldFortuneRequirement_WinGameStrengthHero = 2,
    k_eOverworldFortuneRequirement_WinGameIntelligenceHero = 3,
    k_eOverworldFortuneRequirement_WinGameAgilityHero = 4,
    k_eOverworldFortuneRequirement_WinGameUniversalHero = 5,
    k_eOverworldFortuneRequirement_KillRoshan = 6,
    k_eOverworldFortuneRequirement_KillTormentor = 7,
    k_eOverworldFortuneRequirement_WinGameWithScepterShard = 8,
    k_eOverworldFortuneRequirement_GetMultipleKills = 9,
    k_eOverworldFortuneRequirement_Top3Networth = 10,
};
