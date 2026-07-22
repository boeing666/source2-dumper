#pragma once

enum EOverworldCharacterVisibility : uint32_t  // sizeof 0x4
{
    CompleteNode = 1,
    ActiveNode = 2,
    LockedNode = 4,
    AlwaysVisible = 8,
};
