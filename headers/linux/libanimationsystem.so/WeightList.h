#pragma once

class WeightList  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlVector< float32 > m_weights; // offset 0x8, size 0x18, align 8
};
