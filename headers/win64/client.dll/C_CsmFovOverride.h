#pragma once

class C_CsmFovOverride : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CUtlString m_cameraName; // offset 0x600, size 0x8, align 8
    float32 m_flCsmFovOverrideValue; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
};
