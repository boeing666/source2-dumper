#pragma once

class CSosGroupActionOcclusionSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flCalculationInterval; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flRadius; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOcclusionScale; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOcclusionMin; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOcclusionMax; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTestDepth; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
};
