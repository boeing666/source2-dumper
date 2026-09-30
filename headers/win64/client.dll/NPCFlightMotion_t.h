#pragma once

struct NPCFlightMotion_t  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flFlightSpeed; // offset 0x0, size 0x4, align 4
    float32 m_flSquiggleMotionScale; // offset 0x4, size 0x4, align 4
    CRangeFloat m_flSquiggleMotionAmplitude; // offset 0x8, size 0x8, align 255
    CRangeFloat m_flSquiggleMotionRandomizeInterval; // offset 0x10, size 0x8, align 255
};
