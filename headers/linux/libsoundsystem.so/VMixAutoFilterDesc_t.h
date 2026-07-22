#pragma once

struct VMixAutoFilterDesc_t  // sizeof 0x2C, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flEnvelopeAmount; // offset 0x0, size 0x4, align 4
    float32 m_flAttackTimeMS; // offset 0x4, size 0x4, align 4
    float32 m_flReleaseTimeMS; // offset 0x8, size 0x4, align 4
    VMixFilterDesc_t m_filter; // offset 0xC, size 0x10, align 4
    float32 m_flLFOAmount; // offset 0x1C, size 0x4, align 4
    float32 m_flLFORate; // offset 0x20, size 0x4, align 4
    float32 m_flPhase; // offset 0x24, size 0x4, align 4
    VMixLFOShape_t m_nLFOShape; // offset 0x28, size 0x4, align 4
};
