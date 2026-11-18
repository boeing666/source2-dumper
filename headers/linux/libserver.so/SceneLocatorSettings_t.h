#pragma once

struct SceneLocatorSettings_t  // sizeof 0xC, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    SharedMovementGait_t m_nGaitOverride; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x1]; // offset 0x1
    ChoreoLocatorArrivalOptionFlags_t m_nArrivalOptions; // offset 0x2, size 0x2, align 2
    bool m_bHasArrivalOptions; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    float32 m_flSpeedScale; // offset 0x8, size 0x4, align 4
};
