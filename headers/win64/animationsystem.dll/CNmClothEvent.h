#pragma once

class CNmClothEvent : public CNmEvent /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CNmClothEvent::Type_t m_type; // offset 0x18, size 0x4, align 4
    float32 m_flStiffness; // offset 0x1C, size 0x4, align 4
    float32 m_flSpeedIn; // offset 0x20, size 0x4, align 4
    float32 m_flSpeedOut; // offset 0x24, size 0x4, align 4
    float32 m_flLengthSeconds; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_vertexSetName; // offset 0x30, size 0x8, align 8
    CUtlString m_effectName; // offset 0x38, size 0x8, align 8
};
