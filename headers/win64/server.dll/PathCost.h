#pragma once

class PathCost : public CNavPathCost /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x3C]; // offset 0x0
    float32 m_dangerFactor; // offset 0x3C, size 0x4, align 4
    float32 m_damagingAreasPenaltyCost; // offset 0x40, size 0x4, align 4
    float32 m_flAgentMaxClimb; // offset 0x44, size 0x4, align 4
    char _pad_0048[0x18]; // offset 0x48
};
