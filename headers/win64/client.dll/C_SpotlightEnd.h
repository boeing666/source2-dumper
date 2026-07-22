#pragma once

class C_SpotlightEnd : public C_BaseModelEntity /*0x0*/  // sizeof 0xFC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    float32 m_flLightScale; // offset 0xFB0, size 0x4, align 4 | MNotSaved
    float32 m_Radius; // offset 0xFB4, size 0x4, align 4 | MNotSaved
    char _pad_0FB8[0x8]; // offset 0xFB8
};
