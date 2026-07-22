#pragma once

enum EMinimapRevealReason : uint32_t  // sizeof 0x4
{
    EVisibleByEnemyPlayer = 0,
    EVisibleFromAttackingEnemyPlayer = 1,
    EVisibleByNPC = 2,
    EVisibleByObjective = 3,
    EVisibleByMirageTeleport = 4,
};
