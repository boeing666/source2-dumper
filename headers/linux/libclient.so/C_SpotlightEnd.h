#pragma once

class C_SpotlightEnd : public C_BaseModelEntity /*0x0*/  // sizeof 0xF48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    float32 m_flLightScale; // offset 0xF38, size 0x4, align 4 | MNotSaved
    float32 m_Radius; // offset 0xF3C, size 0x4, align 4 | MNotSaved
    char _pad_0F40[0x8]; // offset 0xF40
};
