#pragma once

struct DOFDesc_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flDofNearBlurry; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 m_flDofNearCrisp; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDofFarCrisp; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    float32 m_flDofFarBlurry; // offset 0xC, size 0x4, align 4 | MPropertyDescription
};
