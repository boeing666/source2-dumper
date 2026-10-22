#pragma once

class CNavIdolWalkbackPathCost : public CNavPathCost /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    float32 m_flReferenceZ; // offset 0x50, size 0x4, align 4
    float32 m_flHeightPenaltyScale; // offset 0x54, size 0x4, align 4
};
