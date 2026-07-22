#pragma once

struct VMixEnvelopeDesc_t  // sizeof 0xC, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flAttackTimeMS; // offset 0x0, size 0x4, align 4
    float32 m_flHoldTimeMS; // offset 0x4, size 0x4, align 4
    float32 m_flReleaseTimeMS; // offset 0x8, size 0x4, align 4
};
