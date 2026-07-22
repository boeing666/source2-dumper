#pragma once

enum NPCPathingRequest_t : uint32_t  // sizeof 0x4
{
    StopIfNoPath = 0,
    TryRandomMovementIfNoPath = 1,
    AllowDirectDropDownIfNoPath = 2,
};
