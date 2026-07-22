#pragma once

class C_PointCameraVFOV : public C_PointCamera /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x650]; // offset 0x0
    float32 m_flVerticalFOV; // offset 0x650, size 0x4, align 4
    char _pad_0654[0x4]; // offset 0x654
};
