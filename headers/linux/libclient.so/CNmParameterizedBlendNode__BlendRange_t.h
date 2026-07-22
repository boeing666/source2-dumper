#pragma once

struct CNmParameterizedBlendNode::BlendRange_t  // sizeof 0xC, align 0x4 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    int16 m_nInputIdx0; // offset 0x0, size 0x2, align 2
    int16 m_nInputIdx1; // offset 0x2, size 0x2, align 2
    Range_t m_parameterValueRange; // offset 0x4, size 0x8, align 4
};
