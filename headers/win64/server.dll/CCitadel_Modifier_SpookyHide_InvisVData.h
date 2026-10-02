#pragma once

class CCitadel_Modifier_SpookyHide_InvisVData : public CCitadel_Modifier_InvisVData /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    float32 m_flMaxCameraAngleForSeeing; // offset 0xA58, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxDistanceForSeeing; // offset 0xA5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flInvisBias; // offset 0xA60, size 0x4, align 4 | MPropertyDescription
    float32 m_flSpottedMinTimeToStart; // offset 0xA64, size 0x4, align 4 | MPropertyDescription
};
