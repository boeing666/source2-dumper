#pragma once

enum CNmSoundEvent::Position_t : uint32_t  // sizeof 0x4
{
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};
