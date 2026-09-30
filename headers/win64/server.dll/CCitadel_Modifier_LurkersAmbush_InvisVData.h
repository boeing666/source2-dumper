#pragma once

class CCitadel_Modifier_LurkersAmbush_InvisVData : public CCitadel_Modifier_InvisVData /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA28]; // offset 0x0
    float32 m_flMaxCameraAngleForSeeing; // offset 0xA28, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxDistanceForSeeing; // offset 0xA2C, size 0x4, align 4 | MPropertyDescription
    float32 m_flInvisBias; // offset 0xA30, size 0x4, align 4 | MPropertyDescription
    float32 m_flSpottedMinTimeToStart; // offset 0xA34, size 0x4, align 4 | MPropertyDescription
};
