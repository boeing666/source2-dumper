#pragma once

class CStateNodeInstanceData  // sizeof 0x4C, align 0xFF [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CRelativeArray< float32 > m_stateWeights; // offset 0x0, size 0x8, align 4
    Vector m_vTransitionVelocityDeltaWS; // offset 0x8, size 0xC, align 4
    char _pad_0014[0xC]; // offset 0x14
    CAnimNetVar< float32 > m_currentStateStartTime; // offset 0x20, size 0xC, align 4
    char _pad_002C[0x10]; // offset 0x2C
    CAnimNetVar< uint8 > m_resetCount; // offset 0x3C, size 0xC, align 4
    char _pad_0048[0x4]; // offset 0x48
};
