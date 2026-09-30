#pragma once

class CCitadel_Modifier_ZiplineBoostVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flRampUpTime; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPercentageSpeedIncreaseRampFrom; // offset 0x764, size 0x4, align 4
    float32 m_flPercentageSpeedIncreaseRampTo; // offset 0x768, size 0x4, align 4
    char _pad_076C[0x4]; // offset 0x76C
    CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // offset 0x770, size 0x88, align 8 | MPropertyStartGroup
};
