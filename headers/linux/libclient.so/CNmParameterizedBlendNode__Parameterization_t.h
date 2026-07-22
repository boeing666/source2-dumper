#pragma once

struct CNmParameterizedBlendNode::Parameterization_t  // sizeof 0x50, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
    CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges; // offset 0x0, size 0x48, align 8
    Range_t m_parameterRange; // offset 0x48, size 0x8, align 4
};
