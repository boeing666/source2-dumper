#pragma once

enum EOverworldNodeFlags : uint32_t  // sizeof 0x4
{
    Premium = 1,
    MainQuest = 2,
    SideQuest = 4,
    DelayStyles = 8,
    Shortcut = 16,
    InvisibleUntilNearby = 32,
    Secret = 64,
    FinalNode = 128,
    Invisible = 256,
};
