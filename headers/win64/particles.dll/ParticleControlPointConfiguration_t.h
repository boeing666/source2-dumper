#pragma once

struct ParticleControlPointConfiguration_t  // sizeof 0x88, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlVector< ParticleControlPointDriver_t > m_drivers; // offset 0x8, size 0x18, align 8
    ParticlePreviewState_t m_previewState; // offset 0x20, size 0x68, align 8
};
