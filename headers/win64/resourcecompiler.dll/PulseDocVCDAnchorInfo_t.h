#pragma once

struct PulseDocVCDAnchorInfo_t  // sizeof 0x10, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    bool m_bArrivalOptionsAreExternal; // offset 0x8, size 0x1, align 1
    SharedMovementGait_t m_nGaitOverride; // offset 0x9, size 0x1, align 1
    ChoreoLocatorArrivalOptionFlags_t m_nArrivalOptions; // offset 0xA, size 0x2, align 2
    float32 m_flSpeedScale; // offset 0xC, size 0x4, align 4
};
