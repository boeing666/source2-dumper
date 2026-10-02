#pragma once

class CCitadel_Modifier_ZiplineBoostVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flRampUpTime; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPercentageSpeedIncreaseRampFrom; // offset 0x794, size 0x4, align 4
    float32 m_flPercentageSpeedIncreaseRampTo; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // offset 0x7A0, size 0xA0, align 8 | MPropertyStartGroup
};
