#pragma once

enum ECrateLootType_t : uint32_t  // sizeof 0x4
{
    ELoot_Invalid = -1,
    ELoot_GoldIdol = 0,
    ELoot_RespawnCredit = 1,
    ELoot_NeutralGold = 2,
    ELoot_KothCapturePoint = 3,
    ELoot_LootTypeCount = 4,
};
