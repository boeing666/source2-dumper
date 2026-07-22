#pragma once

enum AI_VolumetricEventChannel_t : uint8_t  // sizeof 0x1
{
    eUnspecified = 0,
    eRepeating = 1,
    eRepeatedDanger = 2,
    eWeapon = 3,
    eInjury = 4,
    eFootstep = 5,
};
