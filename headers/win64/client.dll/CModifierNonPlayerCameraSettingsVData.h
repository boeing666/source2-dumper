#pragma once

class CModifierNonPlayerCameraSettingsVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flCameraSideOffset; // offset 0x760, size 0x4, align 4
    float32 m_flCameraBackOffset; // offset 0x764, size 0x4, align 4
    float32 m_flCameraHeightStanding; // offset 0x768, size 0x4, align 4
    char _pad_076C[0x4]; // offset 0x76C
};
