#pragma once

struct RnHullDesc_t : public RnShapeDesc_t /*0x0*/  // sizeof 0x108, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    RnHull_t m_Hull; // offset 0x18, size 0xF0, align 8
};
