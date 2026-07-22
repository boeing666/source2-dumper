#pragma once

class CPointCameraVFOV : public CPointCamera /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x508]; // offset 0x0
    float32 m_flVerticalFOV; // offset 0x508, size 0x4, align 4
    char _pad_050C[0x4]; // offset 0x50C
};
