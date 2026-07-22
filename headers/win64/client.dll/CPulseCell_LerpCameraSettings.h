#pragma once

class CPulseCell_LerpCameraSettings : public CPulseCell_BaseLerp /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    float32 m_flSeconds; // offset 0x90, size 0x4, align 4
    PointCameraSettings_t m_Start; // offset 0x94, size 0x10, align 4
    PointCameraSettings_t m_End; // offset 0xA4, size 0x10, align 4
    char _pad_00B4[0x4]; // offset 0xB4
};
