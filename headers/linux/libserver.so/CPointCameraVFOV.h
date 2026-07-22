#pragma once

class CPointCameraVFOV : public CPointCamera /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    float32 m_flVerticalFOV; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
};
