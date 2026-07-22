#pragma once

class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1F0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vMinOutputValue; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vMaxOutputValue; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName
    char _pad_020C[0x4]; // offset 0x20C
};
