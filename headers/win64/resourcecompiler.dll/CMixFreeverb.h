#pragma once

class CMixFreeverb : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flRoomSize; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flDamp; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flWidth; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flLateReflections; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
};
