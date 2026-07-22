#pragma once

struct constraint_axislimit_t  // sizeof 0x10, align 0xFF [trivial_dtor] (vphysics2)
{
    float32 flMinRotation; // offset 0x0, size 0x4, align 4
    float32 flMaxRotation; // offset 0x4, size 0x4, align 4
    float32 flMotorTargetAngSpeed; // offset 0x8, size 0x4, align 4
    float32 flMotorMaxTorque; // offset 0xC, size 0x4, align 4
};
