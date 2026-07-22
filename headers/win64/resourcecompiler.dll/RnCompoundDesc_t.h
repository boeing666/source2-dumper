#pragma once

struct RnCompoundDesc_t : public RnShapeDesc_t /*0x0*/  // sizeof 0xA8, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    RnCompound_t m_Compound; // offset 0x18, size 0x90, align 8
};
